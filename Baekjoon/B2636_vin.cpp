#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N,M;
int arr[100][100];
int cheese=0;
int move_x[]={-1,1,0,0};
int move_y[]={0,0,-1,1};

int melt_cheese(){
    int vis[100][100]={0};
    queue<pair<int,int> > q;
    vector<pair<int,int> > vec;
    int melt=0;

    q.push(pair<int,int> (0,0));

    while(!q.empty()){
        
        int x=q.front().second;
        int y=q.front().first;
        
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+move_x[i];
            int ny=y+move_y[i];

            if(nx>=0&&ny>=0&&nx<M&&ny<N&& vis[ny][nx]==0){
                if(arr[ny][nx]==0){
                    vis[ny][nx]=1;
                    q.push(pair<int,int> (ny,nx));
                }
                if(arr[ny][nx]==1){
                    vec.push_back(pair<int,int> (ny,nx));
                    vis[ny][nx]=1;
                }
            }
        }
    }    
    
    while (!vec.empty())
    {
        int x=vec.back().second;
        int y=vec.back().first;
        if(arr[y][x]==1){
            arr[y][x]=0;
            melt++;
        }
        vec.pop_back();
    }

    cheese-=melt;

    return melt;
}

int main(){
    //세로가로길이 입력
    cin>>N>>M;
    //치즈의 위치입력
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                cheese++;//치즈가 면적 입력
            }
        }
    }
    int before;
    int t=0;
    while(cheese!=0){
        before=melt_cheese();
        t++;
    }

    cout<<t<<'\n';
    cout<<before;
}