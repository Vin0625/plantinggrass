#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int div(int N,int r,int c){
    int answer=0;
    if(N==0){
        return answer;
    }
    int n=pow(2,N-1);
    if(r>=n){
        answer+=n*n*2;
        r-=n;
    }
    if(c>=n){
        answer+=n*n;
        c-=n;
    }
    return answer+div(N-1,r,c);
}

int main(){
    int N,r,c;

    cin>>N>>r>>c;

    int answer=0;

    answer=div(N,r,c);
    cout<<answer;
}