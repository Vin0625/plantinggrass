#include <iostream>

using namespace std;

int main() {
    int T;
    int fec;
    int answer;
    cin>>T;

    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(0);
    for(int i=0;i<T;i++){
            answer=0;
            cin>>fec;
            
            for(int k=5;k<=fec;k*=5){
                answer+=fec/k;
            }
            cout<<answer<<'\n';
    }
}

