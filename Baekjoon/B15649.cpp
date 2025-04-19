#include <iostream>
#include <vector>

using namespace std;

int N,M;
vector<int> selecter;
vector<bool> visited;

void backtrack(int cnt){
    if(cnt==M){
        for(int i=0;i<M;i++){
            cout<<selecter[i]<<" ";
        }
        cout<<"\n";
        return;
    }else{
        for(int i=0;i<N;i++){
            if(!visited[i]){
                selecter[cnt]=i+1;
                visited[i]=true;
                backtrack(cnt+1);
                visited[i]=false;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>N>>M;
    selecter.resize(M);
    visited.resize(N,false);

    backtrack(0);
    
}