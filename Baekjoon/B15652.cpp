#include <iostream>
#include <vector>

using namespace std;

void NnM(int N, int M ,vector<int> num, int cur){
    if(M==cur){
        for(int i=0;i<M;i++){
            cout<<num[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    
    for(int i=1;i<N+1;i++){
        if(cur==0||cur>0&&num[cur-1]<=i){
            num.push_back(i);
            NnM(N,M,num,cur+1);
            num.pop_back();
        }
    }
}


int main(){
    int N,M;
    vector<int> nums;
    cin>>N>>M;

    NnM(N,M,nums,0);
}