#include <iostream>
#include <queue>

using namespace std;

int arr[8][8];
int copyed[8][8];
int N,M;
int move_x[]={-1,1,0,0};
int move_y[]={0,0,-1,1};
int answer=0;

void copy_arr(int bb[8][8],int cc[8][8]){//배열 복사
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cc[i][j]=bb[i][j];
        }
    }
}


void virus(){//바이러스 퍼지는 함수
    int afvi[8][8];
    queue<pair<int,int> > q;
    copy_arr(copyed,afvi);
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(afvi[i][j]==2){
                q.push(pair<int,int> (i,j));
            }
        }
    }

    while(!q.empty()){
        int y=q.front().first;
        int x=q.front().second;

        q.pop();

        for(int i=0;i<4;i++){
            int nx=x+move_x[i];
            int ny=y+move_y[i];
            if(nx>=0&&ny>=0&&nx<M&&ny<N){
                if(afvi[ny][nx]==0){
                    afvi[ny][nx]=2;
                    q.push(pair<int,int> (ny,nx));
                }
            }
        }
    }

    int save=0;

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(afvi[i][j]==0){
                save++;
            }
        }
    }

    if(save>answer){
        answer=save;
    }

}


void set_wall(int wall){//벽을 세우는 함수
    if(wall==3){//벽3개세우면 바이러스 퍼트리기
        virus();
        return;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(copyed[i][j]==0){
                copyed[i][j]=1;//벽세우고
                set_wall(wall+1);//나머지 벽세우기
                copyed[i][j]=0;//다시 초기화
            }
        }
    }
}
int main(){

    cin>>N>>M;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(arr[i][j]==0){
                copy_arr(arr,copyed);
                copyed[i][j]=1;
                set_wall(1);
                copyed[i][j]=0;
            }
        }
    }

    cout<<answer;
}