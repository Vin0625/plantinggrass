#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int N,M;

    cin>>N;
    cin>>M;
    
    vector<string> chess(N);

    for(int i=0;i<N;i++){
        cin>>chess[i];
    }
    
    int min=32;

    for(int i=0; i<N-7;i++){
        for(int j=0;j<M-7;j++){
            int stw=0;
            int stb=0;
            for(int l=i;l<i+8;l++){
                for(int k=j;k<j+8;k++){
                //시작이 검정
                //0,2,4,6 이 B
                //1,3,5,7이 W
                    if((k-j+l-i)%2==0){//짝수일때
                        if(chess[l][k]=='W'){
                           stb++;
                        }
                        if(chess[l][k]=='B'){
                            stw++;
                        }
                    }else{
                        if(chess[l][k]=='W'){
                            stw++;
                        }
                        if(chess[l][k]=='B'){
                            stb++;
                        }
                    }
                }
            }
            if(min>stw){
                min=stw;
                }
            if(min>stb){
                min=stb;
                }
        }
    }
    cout<<min;
}