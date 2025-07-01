#include <iostream>
#include <set>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    set<int> sset;
    unordered_map<int,int> mmap;

    for(int i=0;i<n;i++){
        cin>>nums[i];
        sset.insert(nums[i]);
    }

    int x=0;
    for(int i : sset){
        mmap[i]=x;
        x++;
    }

    for(int i=0;i<nums.size();i++){
        cout<<mmap[nums[i]]<<" ";
    }
}