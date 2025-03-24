#include <iostream>
#include <vector>

using namespace std;

int N,P,D,R;
vector<int> tree[50];
int leaf=0;

void count(int num){
    if(tree[num].empty()){
        leaf++;
        if(num==D){
            leaf--;
        }
        return;
    }
    for(int j=0;j<tree[num].size();j++){
        if(tree[num].size()==1&&tree[tree[num][j]].empty()){
            leaf++;
        }else{
            count(tree[num][j]);
        }
    }
    return;
}

int main(){
    cin>> N;

    for(int i=0;i<N;i++){
        cin>>P;
        if(P==-1){
            R=i;
        }else{
            tree[P].push_back(i);
        }
    }

    cin>>D;
    if(D==R){//루트 노드일때
        cout<<0;
    }else{
        
        tree[D].clear();
        count(R);
        cout<<leaf;
    }

}