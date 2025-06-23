#include <iostream>
#include <queue>

using namespace std;
struct cmp
{
    bool operator()(int a, int b){
        return a>b;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin>>N;
    int current;
    int min;
    priority_queue<int,vector<int>,cmp> heap;

    for(int i=0;i<N;i++){
        cin>>current;
        if(current==0){
            if(heap.empty()){
                cout<<"0\n";
            }else{
                cout<<heap.top()<<"\n";
                heap.pop();
            }
        }else{
            heap.push(current);
        }
    }
}