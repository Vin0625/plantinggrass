#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct B11286
{
    int n;
    int p;

    B11286(int num,int plus) : n(num),p(plus){}
};

struct cmp
{
    bool operator()(B11286 a, B11286 b){
        if(a.n==b.n){
            return a.p>b.p;
        }

        return a.n<b.n;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    int N;

    cin>>N;

    priority_queue<B11286,vector<B11286>,cmp > pque;
    for(int i=0;i<N;i++){
        int t;
        cin>>t;
        if(t>0){
            pque.push(B11286(t*-1,1));
        }else if(t<0){
            pque.push(B11286(t,-1));
        }else{
            if(pque.empty()){
                cout<<"0\n";
            }else{
                int top;
                if(pque.top().p==1){
                    top=pque.top().n*-1;
                }else{
                    top=pque.top().n;
                }

                cout<<top<<"\n";
                pque.pop();
            }
        }
    }
}