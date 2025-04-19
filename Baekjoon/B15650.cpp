#include <iostream>
#include <vector>

using namespace std;

int N,M;
vector<int> selector;
int start=1;

void backtrack(int cnt,int next){
    if(cnt==M){
        for(int i=0;i<M;i++){
            cout<<selector[i]<<" ";
        }
        cout<<"\n";
        return;
    }else{
        for(int i=next;i<=N;i++){
            selector[cnt]=i;
            backtrack(cnt+1,i+1);
        }
    }
}

int main(){
    cin>>N>>M;

    selector.resize(N);

    backtrack(0,start);
}