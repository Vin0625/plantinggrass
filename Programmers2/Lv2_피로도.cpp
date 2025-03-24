#include <string>
#include <vector>

using namespace std;

int down(vector<vector<int>> dungeons, int k,int num,vector<int> visit){
    vector<int> vvisit=visit;
    for(int i=0;i<dungeons.size();i++){
        if(k>dungeons[i][0]&&k>dungeons[i][1]&&visit[i]==0){
            vvisit[i]=1;
            k-=dungeons[i][1];
            num++;
            num=down(dungeons,k,num,vvisit);
        }
    }

    return num;
}

int solution(int k, vector<vector<int>> dungeons) {
    int answer = -1;
    vector<int> visit(8,0);
    int num=0;
    answer=down(dungeons,k,num,visit);
    return answer;
}

