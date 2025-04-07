#include <iostream>
#include <vector>

using namespace std;

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(0);

    int N,M;
    int num;
    vector<int> nums;

    cin>>N>>M;
    cin>>num;
    nums.push_back(num);
    for(int i=1;i<N;i++){
        cin>>num;
        nums.push_back(num+nums[i-1]);
    }

    for(int i=0;i<M;i++){
        int start,end;
        int answer;
        cin>>start>>end;
        
        if(end==1){
            answer=nums[end-1];
        }else{
            answer=nums[end-1]-nums[start-2];
        }
        cout<<answer<<"\n";
    }
    
}