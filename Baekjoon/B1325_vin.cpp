#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;

    vector<vector<int> > com(N);
    
    for(int i=0;i<M;i++){
        int A,B;
        cin>>A>>B;
        com[B-1].push_back(A-1);
    }
    
    vector<int> count(N,0);
    for(int i=0;i<N;i++){
        queue<int> que;
        vector<bool> visit(N,false);
        que.push(i);
        visit[i]=true;
        while (!que.empty())
        {
            int cur=que.front();
            que.pop();
            for(int j=0;j<com[cur].size();j++){
                if(!visit[com[cur][j]]){
                    que.push(com[cur][j]);
                    count[i]++; 
                    visit[com[cur][j]]=true;
                }
            }
        }
    }
    
    int maxnum = *max_element(count.begin(),count.end());

    for(int i = 0; i < N; i++){
        if(count[i] == maxnum){
            cout << i + 1 << " ";
        }
    }
}