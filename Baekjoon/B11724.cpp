#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;

    int a,b;
    int answer=0;
    vector<vector<int> > g(N+1,vector<int>(N+1));
    vector<bool> visit(N,false);
    queue<int> que;
    for(int i=0;i<M;i++){
        cin>>a>>b;
        g[a][b]=1;
        g[b][a]=1;
       }

    for(int j=1;j<N+1;j++){
        if(visit[j]==false){
            que.push(j);
            answer++;
        }

        while (!que.empty())
        {
        int current=que.front();
        que.pop();
        //연결된 것 확인
        for(int i=1;i<g[current].size();i++){
            //길이 있고 방문했는지 확인
            if(g[current][i]==1&&visit[i]==false){
                que.push(i);
                visit[i]=true;
            }
            }
        }
    
    }
    cout<<answer;
}