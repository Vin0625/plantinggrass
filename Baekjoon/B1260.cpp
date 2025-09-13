#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N,M,V;
    int x,y;
    cin>>N>>M>>V;

    vector<vector<int> > g(N+1,vector<int>(N+1));
    queue<int> q;
    vector<int> st;
    vector<int> visit(N+1);

    vector<int> DFS;
    vector<int> BFS;

    for(int i=0;i<M;i++){
        cin>>x>>y;
        g[x][y]=1;
        g[y][x]=1;
    }

    //BFS
    q.push(V);
    visit[V]=1;
    BFS.push_back(V);
    while (!q.empty())
    {
        int top=q.front();
        q.pop();

        for(int i=0;i<g[top].size();i++){
            if(g[top][i]==1&&visit[i]!=1){
                q.push(i);
                visit[i]=1;
                BFS.push_back(i);
            }
        }
    }
    
    for(int i=0;i<=N;i++){
        visit[i]=0;
        }

    //DFS
    st.push_back(V);
    while (!st.empty())
    {
        int top=st.back();
        st.pop_back();
        if(visit[top]==1){
            continue;
        }
        visit[top]=1;
        DFS.push_back(top);
        for(int i=g[top].size()-1;i>=0;i--){
            if(g[top][i]==1&&visit[i]!=1){
                st.push_back(i);
            }
        }
    }

    for(int i=0;i<DFS.size();i++){
        cout<<DFS[i]<<" ";
    }

    cout<<"\n";

    for(int i=0;i<BFS.size();i++){
        cout<<BFS[i]<<" ";
    }


}