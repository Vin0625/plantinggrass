#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> nums(n+1);
    vector<int> dp(n+1);
    for(int i=1;i<n+1;i++){
        cin>>nums[i];
    }
    dp[1]=nums[1];
    if(n==1){
        cout<<dp[1];
        return 0;
    }
    dp[2]=dp[1]+nums[2];
    if(n==2){
        cout<<dp[2];
        return 0;
    }


    dp[3]=max(nums[1]+nums[3],nums[2]+nums[3]);
 

    for(int i=4;i<n+1;i+=1){
        dp[i]=max(dp[i-2]+nums[i],dp[i-3]+nums[i-1]+nums[i]);
    }

    cout<<dp[n];
}