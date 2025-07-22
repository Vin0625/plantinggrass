#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N,M,B;
    int max=-1;
    int time=0;
    int answer=0;
    int mintime=100000000;
    bool br=false;
    cin>>N>>M>>B;

    vector<vector<int> > ground(N,vector<int>(M));

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>ground[i][j];
            if(max<ground[i][j]){
                max=ground[i][j];
            }
        }
    }
    int num;
    answer=max;
    for(int k=max;k>=0;k--){
        int curblock=B;
        br=false;
        time=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(k==ground[i][j]){
                    continue;
                }
                if(ground[i][j]<k){
                    num=k-ground[i][j];
                    //블럭에서 k-ground만큼 뺌
                    curblock-=num;
                    //더한만큼 시간 더함
                    time+=num;
                }
                if(ground[i][j]>k){
                    num=ground[i][j]-k;
                    //블럭에서 ground[]-k만큼 더함
                    curblock+=num;
                    //제거한 만큼 시간 더함
                    time+=num*2;
                }
                //시간이 mintime보다 크면 break;
                if(time>mintime){
                    br=true;
                    break;
                }
            }
            if(br){
                break;
            }
        }

        //최소시간보다 더 작으면 교체
        if(mintime>time&&!br&&curblock>=0){
            mintime=time;
            answer=k;
        }
    }

    cout<<mintime<<" "<<answer;
}