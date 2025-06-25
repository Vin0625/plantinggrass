#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> answer;
queue<int> que;

int n;

void bfs(int parrent,vector<vector<int> >& tree,vector<bool>& visited){
    for(int i=0;i<tree[parrent].size();i++){
            if(visited[tree[parrent][i]]==false){
                answer[tree[parrent][i]]=parrent;
                visited[tree[parrent][i]]=true;
                bfs(tree[parrent][i],tree,visited);
            }
        }
    
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a,b;
    cin>>n;

    vector<vector<int> > tree(n+1);
    vector<bool> visited(n+1,false);
    for(int i=0;i<n-1;i++){
        cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    answer.resize(n+1);

    bfs(1,tree,visited);   
    
    for(int i=2;i<n+1;i++){
        cout<<answer[i]<<"\n";
    }
}