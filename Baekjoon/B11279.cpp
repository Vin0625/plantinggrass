#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n;
    priority_queue<int> pque;

    for(int i=0;i<n;i++){
        cin>>m;
        if(m!=0){
            pque.push(m);
        }else
        {
            if(pque.empty()){
                cout<<"0\n";
            }else{
                cout<<pque.top()<<"\n";
                pque.pop();
            }
        }
        
    }
}