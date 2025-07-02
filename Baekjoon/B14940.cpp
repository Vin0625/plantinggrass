#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int> > answer;
int x[4]={0,1,0,-1};
int y[4]={1,0,-1,0};

void bfs(pair<int,int> st, vector<vector<int> >& road) {
    queue<pair<int,int> > q;
    q.push(st);
    answer[st.first][st.second] = 0;

    while(!q.empty()) {
        pair<int,int> cur = q.front();
        q.pop();

        for(int i=0; i<4; i++) {
            int nx = cur.first + x[i];
            int ny = cur.second + y[i];

            if(nx<0 || nx>=road.size() || ny<0 || ny>=road[0].size()) continue;
            if(answer[nx][ny]!=-1 || road[nx][ny]==0) {
                continue;
            }

            answer[nx][ny] = answer[cur.first][cur.second] + 1;
            q.push(make_pair(nx, ny));
        }
    }
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;

    vector<vector<int> > road(n,vector<int>(m));
    answer.resize(n,vector<int>(m,-1));
    pair<int,int> st;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>road[i][j];
            if(road[i][j]==2){
                st.first=i;
                st.second=j;
            }
            if(road[i][j]==0){
                answer[i][j]=0;
            }
        }
    }

    bfs(st,road);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<"\n";
    }
}