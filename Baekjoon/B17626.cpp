#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;

    int z=2;
    cin>>n;
    vector<int> dp(n+1,4);
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    for(int i=4;i<n+1;i++){
        if(i==z*z){
            dp[i]=1;
            z++;
            continue;
        }
        for(int j=z-1;j>0;j--){
            dp[i]=min(dp[i-j*j]+1,dp[i]);
        }
    }
    
    cout<<dp[n];
}