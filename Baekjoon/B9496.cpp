#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    int x[4]={0,0,1,-1};
    int y[4]={-1,1,0,0};
    cin>>T;

    for(int t=0;t<T;t++){
        int N;
        cin>>N;

        vector<vector<int> > s(2,vector<int>(N));
        for(int i=0;i<2;i++){
            for(int j=0;j<N;j++){
                cin>>s[i][j];
            }
        }

        int sum=0;
        vector<vector<int> > answer(2,vector<int>(N));
        answer[0][0]=s[0][0];
        answer[1][0]=s[1][0];
        if(N==1){
            
        }else{
            answer[0][1]=s[1][0]+s[0][1];
            answer[1][1]=s[0][0]+s[1][1];
            for(int i=2;i<N;i++){
                answer[0][i]=max(answer[1][i-1],answer[1][i-2])+s[0][i];
                answer[1][i]=max(answer[0][i-1],answer[0][i-2])+s[1][i];;
            }
        }

        cout<<max(answer[1][N-1],answer[0][N-1])<<"\n";
    }
}