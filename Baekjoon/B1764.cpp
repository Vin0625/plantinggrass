#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N,M;
    
    cin>>N>>M;

    unordered_map<string,int> ear;
    vector<string> answer;
    string str;
    for(int i=0;i<N;i++){
        cin>>str;
        ear[str]=1;
    }

    for(int i=0;i<M;i++){
        cin>>str;
        if(ear[str]==1){
            answer.push_back(str);
        }
    }

    sort(answer.begin(),answer.end());
    cout<<answer.size()<<"\n";
    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<"\n";
    }
}