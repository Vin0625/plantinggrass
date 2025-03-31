#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int testcase;
    cin>>testcase;

    for(int i=0; i<testcase;i++){
        int N,M;
        cin>>N>>M;
        vector<pair<int, int> > document;
        vector<int> maxnum;
        pair<int,int> select;
        for(int j=0; j<N;j++){
            int num;
            cin>>num;
            select.first=j;
            select.second=num;
            maxnum.push_back(num);
            document.push_back(select);
        }
        int answer=0;

        sort(maxnum.begin(),maxnum.end());
        reverse(maxnum.begin(),maxnum.end());

        while (!document.empty())
        {
            //최대인지 검사 아니면 뒤로
            if(document[0].second==maxnum[0]){
                if(document[0].first==M){
                    //팝할것이 원하는 거면 break
                    answer++;
                    cout<<answer<<"\n";
                    break;
                }else{
                    //맞으면 팝하고 최댓값 구함 답 ++
                    answer++;
                    document.erase(document.begin());
                    maxnum.erase(maxnum.begin());
                }
            }else{
                document.push_back(document[0]);
                document.erase(document.begin());
            } 
        }
        
    }
}