#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    int comNum;
    int network;

    cin>>comNum;
    cin>>network;

    vector<vector<int> > com(comNum+1);

    //컴퓨터 연결
    for(int i=0;i<network;i++){
        int a,b;
        cin>>a>>b;
        com[a].push_back(b);
        com[b].push_back(a);
    }

    //1번기준으로 Bfs
    queue<int> que;
    vector<bool> visit(comNum,false);
    int answer=0;

    que.push(1);
    visit[1]=true;
    while(!que.empty()){
        int target=que.front();
        que.pop();

        for(int i=0;i<com[target].size();i++){
            if(visit[com[target][i]]==false){
                answer++;
                visit[com[target][i]]=true;
                que.push(com[target][i]);
            }
        }
    }

    cout<<answer;
}