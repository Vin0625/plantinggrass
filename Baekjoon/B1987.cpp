#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

vector<string> v;
int x[4]={0,0,1,-1};
int y[4]={1,-1,0,0};
int R,C;

int bfs(int n,queue<pair<int,int> > que,vector<int> visited){
    int max;
    pair<int,int> p;
    p=que.front();
    que.pop();
    visited[v[p.first][p.second]-'A']=1;

    for(int i=0;i<4;i++){
        int nx=p.first+x[i];
        int ny=p.second+y[i];

        if(visited[v[nx][ny]-'A']!=1&&nx>0&&ny>0&&nx<R&&ny<C){
            que.push(make_pair(nx,ny));
            visited[v[nx][ny]-'A']=1;
        }
    }

    

    return max;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>R>>C;

    v.resize(R);
    vector<int> visited(26,0);
    queue<pair<int,int> > que;
    for(int i=0;i<R;i++){
        cin>>v[i];
    }

    que.push(make_pair(0,0));
    
    
}