#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    long long div=1000000007;
    long long answer=2;

    cin>>n;
    vector<long long> sum(n);

    if(n<=1){
        cout<<1;
        return 0;
    }

    sum[0]=1;
    sum[1]=1;

    for(int i=2;i<n;i++){
        sum[i]=(sum[i-1]+sum[i-2])%div;
        answer=(answer+sum[i])%div;
    }
    answer=(answer+sum[n-2])%div;

    cout<<answer;
}