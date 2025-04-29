#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin>>N;
    vector<int> nonsort(N+1);
    
    for(int i=1;i<=N;i++){
        cin>>nonsort[i];
    }

    vector<int> A=nonsort;
    sort(A.begin(), A.end());
    
    unordered_map<int,int> where;

    for(int i=1;i<=N;i++){
        where[A[i]]=i;
    }
    int max=0;
    for(int i=1;i<=N;i++){
        if(A[i]>nonsort[i]){
            if(max<i-where[nonsort[i]]){
                max=i-where[nonsort[i]];
            }
        }
    }

    cout<<max+1;
}
