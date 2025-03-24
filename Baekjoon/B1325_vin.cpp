#include <iostream>
#include <vector>

using namespace std;

vector<int> com[100000];

int main(){
    int N,M;
    int be,af;
    int max=0;
    int num;
    vector<int> answer;
    vector<int> comnum;

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    cin>>N>>M;

    for(int i=0;i<M;i++){
        cin>>be>>af;
        com[af].push_back(be);
    }

    for(int i=0;i<N;i++){
        comnum.push_back(com[i].size());
    }

    for(int i=0;i<N;i++){
        num=0;
        for(int j=0;j<com[i].size();j++){
            num+=comnum[com[i][j]];
        }
        if(num>max){
            max=num;
            answer.clear();
        }
        if(num==max){
            answer.push_back(i);
        }
    }

    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }

}