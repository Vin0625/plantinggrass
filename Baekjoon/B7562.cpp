#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;

    cin>>T;
    int movex[8]={-2,-2,-1,-1,1,1,2,2};
    int movey[8]={-1,1,-2,2,-2,2,-1,1};

    for(int i=0; i<T;i++){
        int I;
        int curx,cury;
        int tarx, tary;

        cin>>I;
        cin>>curx>>cury;
        cin>>tarx>>tary;
        if(curx==tarx&&cury==tary){
            cout<<"0\n";
            continue;
        }
        vector<vector<int> > visit(I,vector<int>(I));
        queue<pair<int,int> > q;

        q.push(make_pair(curx,cury));

        while (!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;

            q.pop();
            for(int j=0;j<8;j++){
                int nx=x+movex[j];
                int ny=y+movey[j];

                if(ny<I&&nx<I&&ny>=0&&nx>=0&&visit[nx][ny]==0){
                    visit[nx][ny]=visit[x][y]+1;
                    if(nx==tarx&&ny==tary){
                        cout<<visit[nx][ny]<<"\n";
                        break;
                    }
                    q.push(make_pair(nx,ny));
                }
            }

        }
        
    }
}