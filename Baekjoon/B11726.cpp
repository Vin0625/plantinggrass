#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int> vec(N+2);
    vec[0]=1;
    vec[1]=1;
    for(int i=2;i<N+2;i++){
        vec[i]=(vec[i-1]+vec[i-2])%10007;
    }

    cout<<vec[N];
}