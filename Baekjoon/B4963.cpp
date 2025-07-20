#include <iostream>
#include <vector>
#include <queue>

using namespace std;



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x[8]={0,0,1,1,1,-1,-1,-1};
    int y[8]={1,-1,0,1,-1,0,1,-1};

    while (true)
    {
        int w,h;
        cin>>w>>h;
        if(w==0&&h==0){
            break;
        }
        vector<vector<int> > map(h,vector<int>(w));
        vector<vector<int> > visit(h,vector<int>(w));
        vector<pair<int,int> > land;

        for(int i=0; i<h;i++){
            for(int j=0;j<w;j++){
                cin>>map[i][j];
                if(map[i][j]==1){
                    land.push_back(make_pair(i,j));
                }
            }
        }

        int answer=0;

        while(!land.empty()){
            queue<pair<int,int> > que;
            pair<int,int> pp;

            pp=land.back();
            land.pop_back();

            if(visit[pp.first][pp.second]==0){
                que.push(pp);
                visit[pp.first][pp.second]=1;
            
                while (!que.empty())
                {
                    pair<int,int> cur;
                    cur=que.front();
                    que.pop();

                    for(int i=0;i<8;i++){
                        int n_x=cur.first+x[i];
                        int n_y=cur.second+y[i];

                        if(n_x>-1&&n_y>-1&&n_x<h&&n_y<w&&visit[n_x][n_y]==0&&map[n_x][n_y]==1){
                            que.push(make_pair(n_x,n_y));
                            visit[n_x][n_y]=1;
                        }
                    }
                }
                
                answer++;
            }
        }
        cout<<answer<<"\n";
        
    }
    
}