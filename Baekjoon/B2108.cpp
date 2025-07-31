#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N;

    cin>>N;
    unordered_map<int, int> count;
    vector<int> nums(N);
    vector<int> fre;

    int sum=0;
    int maxnum = 0;

    for(int i=0; i<N;i++){
        cin>>nums[i];
        sum+=nums[i];
        count[nums[i]]++;
        if(count[nums[i]]>maxnum){
            maxnum=count[nums[i]];
        }
    }

    for (const auto& pair : count) {
        if(pair.second==maxnum){
            fre.push_back(pair.first);
        }
    }

    sort(nums.begin(),nums.end());

    int frenum;

    if(fre.size()==1){
        frenum=fre[0];
    }else{
        sort(fre.begin(),fre.end());
        frenum=fre[1];
    }


    cout<<(int)round((double)sum/N)<<"\n"<<nums[N/2]<<"\n"<<frenum<<"\n"<<nums[N-1]-nums[0];
}