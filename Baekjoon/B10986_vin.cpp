#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N,M;
    long long a;
    long long answer=0;
    cin>> N>>M;
    vector<long long> A(N+1);
    vector<long long> moduler(M,0);
    for(int i=1;i<=N;i++){
        cin>>a;
        A[i]=(A[i-1]+a)%M;
        if(A[i]==0){
            answer++;
        }
        moduler[A[i]]++;
    }

    for(int i=0;i<M;i++){
        if(moduler[i]>1){
            answer+=(moduler[i]*(moduler[i]-1))/2;
        }
    }
    cout << answer;
}