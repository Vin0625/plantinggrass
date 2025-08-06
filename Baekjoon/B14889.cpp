#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int minnum=9999999;
vector<vector<int> > g;

void team(int cnt, int st,vector<int> select){
    if(cnt==N/2){
        vector<int> start=select;
        vector<int> link;
        int sscore=0;
        int lscore=0;
        //팀 나누기
        for(int i=0;i<N;i++){
            if(select.end()==find(select.begin(),select.end(),i)){
                link.push_back(i);

        }
        }
        //팀별 계산
        for(int i=0;i<N/2-1;i++){
            for(int j=i+1;j<N/2;j++){
                sscore+=g[start[i]][start[j]]+g[start[j]][start[i]];

                lscore+=g[link[i]][link[j]]+g[link[j]][link[i]];
            }
        }


        //작은 것 확인
        int score;
        if(sscore>=lscore){
            score=sscore-lscore;
        }else{
            score=lscore-sscore;
        }

        if(minnum>score){
            minnum=score;
        }
        return;
    }


    for(int i=st;i<N;i++){
        select.push_back(i);
        team(cnt+1,i+1,select);
        select.pop_back();
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin>>N;

    g.resize(N,vector<int>(N));
    vector<int> select;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>g[i][j];
        }
    }

    team(0,0,select);
    cout<<minnum;
}