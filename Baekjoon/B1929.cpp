#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);

    int M,N;
    vector<int> answer;
    cin>>M>>N;

    for(int i=M;i<N+1;i++){
        int isprime=1;
        if(i<=1){
            continue;
        }
        if(i==2){
            answer.push_back(i);
        }
        if(i%2==0){
            continue;
        }
        for(int j=3;j*j<=i;j+=2){//어떤 수가 합성수라면 약수 쌍 중 작은 쪽이 반드시 √n 이하에 있음
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
            answer.push_back(i);
        }
    }

    for(auto a:answer){
        cout<<a<<"\n";
    }
}