#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N,M;
    int a;
    vector<int> A;
    A.push_back(0);
    int answer=0;
    cin>> N>>M;
    for(int i=1;i<N;i++){
        cin>>a;
        a=a%M;
        A.push_back(A[i-1]+a);
    }
    for(int i=1;i<N+1;i++){
        
        for(int j=0;j<i;j++){
            if((A[i]-A[j])%M==0){
                    answer++;
            }
        } 
    }

    cout << answer;
}