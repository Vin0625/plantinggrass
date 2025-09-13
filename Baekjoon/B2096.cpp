#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin>>N;

    int board[3]={0,0,0};
    int Manswer[3]={0,0,0};
    int manswer[3]={0,0,0};
    
    int a,b,c;

    for(int i=0;i<3;i++){
        cin>>board[i];
        Manswer[i]=board[i];
        manswer[i]=board[i];
    }
    
    for(int i=1;i<N;i++){
        for(int j=0;j<3;j++){
            cin>>board[j];
        }

        a=max(Manswer[0],Manswer[1])+board[0];
        b=max(max(Manswer[0],Manswer[1]),Manswer[2])+board[1];
        c=max(Manswer[2],Manswer[1])+board[2];

        Manswer[0]=a;
        Manswer[1]=b;
        Manswer[2]=c;

        a=min(manswer[0],manswer[1])+board[0];
        b=min(min(manswer[0],manswer[1]),manswer[2])+board[1];
        c=min(manswer[2],manswer[1])+board[2];

        manswer[0]=a;
        manswer[1]=b;
        manswer[2]=c;

    }

    int maxn=-1;
    int minn=100000000;

    for(int i=0;i<3;i++){
        if(minn>manswer[i]){
            minn=manswer[i];
        }
        if(maxn<Manswer[i]){
            maxn=Manswer[i];
        }
    }

    cout<<maxn<<" "<<minn;
}