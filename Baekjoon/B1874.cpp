#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;

    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    vector<int> stack;
    string answer="";
    int cur=0;
    for(int i=1;i<n+1;i++){
        stack.push_back(i);
        answer+="+";
        while (!stack.empty()&&nums[cur]==stack.back())
        {
            stack.pop_back();
            answer+="-";
            cur++;
        }
        
    }
    
    if(stack.empty()){
        for(int i=0;i<answer.size();i++){
            cout<<answer[i]<<"\n";
        }
    }else{
        cout<<"NO";
    }
}