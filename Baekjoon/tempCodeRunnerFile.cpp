#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N,M;
    int start,end;

    cin>>N>>M;
    vector<vector<pair<int,int> > > city(N+1);
    vector<long long> visited(N+1,10000000000);
    vector<bool> checknum(N+1);
    queue<int> que;

    for(int i=0;i<M;i++){
        int x,y,price;
        cin>>x>>y>>price;

        city[x].push_back(make_pair(y,price));
    }

    cin>>start>>end;
    visited[start]=0;
    que.push(start);
    checknum[start]=true;

    while (!que.empty())
    {
        int cur=que.front();
        long long min=10000000000;
        int minnum=1002;
        que.pop();
        for(int i=0;i<city[cur].size();i++){
                int ny=city[cur][i].first;
                int np=city[cur][i].second;
                if(visited[ny]>visited[cur]+np){
                    visited[ny]=visited[cur]+np;
                }
                
        }
        
        for(int i=1;i<N+1;i++){
            if(!checknum[i]&&min>visited[i]){
                min=visited[i];
                minnum=i;
            }
        }

        if(minnum!=1002){
            checknum[minnum]=true;
            que.push(minnum);
        }
    }

    cout<<visited[end];
    
}