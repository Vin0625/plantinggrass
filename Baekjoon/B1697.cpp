#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N,K;

    cin>>N>>K;

    vector<int> dist(100001, -1);
    queue<int> q;
    int answer;
    dist[N]=0;
    q.push(N);

    while (!q.empty())
    {
        int cur=q.front();
        if(cur==K){
            break;
        }
        q.pop();
        int move[3]={cur+1,cur-1,cur*2};
        for(int i=0;i<3;i++){
            if(move[i]>=0&&move[i]<100001&&dist[move[i]]==-1){
                dist[move[i]]=dist[cur]+1;
                q.push(move[i]);
            }
        }
    }
    cout<<dist[K];
}