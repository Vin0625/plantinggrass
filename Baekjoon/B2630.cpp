#include <iostream>
#include <vector>

using namespace std;

int b=0,w=0;

void check(int x,int y,int n, vector<vector<int> >& paper){
    int m=paper[x][y];
    bool same=true;

    if(n==1){
        if(m==1){
            b++;
        }else{
            w++;
        }
        return;
    }

    for(int i=x;i<x+n;i++){
        for(int j=y;j<y+n;j++){
            if(m!=paper[i][j]){
                same=false;
                break;
            }
        }
        if(!same){
            break;
        }
    }

    if(same){
        if(m==1){
            b++;
        }else{
            w++;
        }
    }else{
        check(x,y,n/2,paper);
        check(x+n/2,y,n/2,paper);
        check(x,y+n/2,n/2,paper);
        check(x+n/2,y+n/2,n/2,paper);
    }

    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin>>N;

    vector<vector<int> > paper(N,vector<int>(N));

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>paper[i][j];
        }
    }

    check(0,0,N,paper);

    cout<<w<<"\n"<<b;
}