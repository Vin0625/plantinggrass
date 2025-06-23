#include <iostream>
#include <vector>

using namespace std;

void backtrack(int N, int M, vector<int> nums){
    for(int i=1;i<=N;i++){
        nums.push_back(i);
        if(nums.size()!=M){
            backtrack(N,M,nums);
        }
        if(nums.size()==M){
            for(int j=0;j<nums.size();j++){
                cout<<nums[j]<<" ";
            }
            cout<<"\n";
        }
        nums.pop_back();
    }
}

int main(){
    int N,M;
    cin>>N>>M;
    vector<int> nums;
    backtrack(N,M, nums);
}