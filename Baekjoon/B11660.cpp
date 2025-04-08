#include <iostream>
#include <vector>

using namespace std;

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(0);

    int N,M;
    cin>>N>>M;

    vector<vector<int> > table(N); 
    vector<int> answer;

    for(int i=0;i<N;i++){
        int num;
        cin>>num;
        table[0].push_back(num);
    }

    for(int i=1;i<N;i++){
        int num;
        for(int j=0;j<N;j++){
            cin>>num;
            table[i].push_back(num+table[i-1][j]);
        }
    }

    for(int i=0;i<M;i++){
        int x1,y1;
        int x2,y2;

        cin>>x1>>y1;
        cin>>x2>>y2;
        int sum=0;
        if(x1==1){
            for(int y=y1-1;y<y2;y++){
                sum+=table[x2-1][y];
            }
        }else{
            for(int y=y1-1;y<y2;y++){
                sum+=table[x2-1][y]-table[x1-2][y];
            }
        }

        answer.push_back(sum);
    }

    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<"\n";
    }
}