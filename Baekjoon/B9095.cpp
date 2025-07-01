#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    int dp[11]={0,1,2,4,7,0,0,0,0,0,0};
    for(int i=5;i<11;i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }   

    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        cout<<dp[m]<<"\n";
    }
}