#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    
    vector<int> pn(n+1);

    if(n<=3){
        return n;
    }
    pn[0]=0;
    pn[1]=1;
    pn[2]=2;
    pn[3]=3;
    for(int i=4;i<=n;i++){
        pn[i]=(pn[i-1]+pn[i-2])%1234567;
    }
    answer=pn[n];
    return answer;
}
