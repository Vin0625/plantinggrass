#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N,M;
    int max=1;
    cin>>N>>M;

    vector<string> square(N);

    for(int i=0;i<N;i++){
        cin>>square[i];
    }

    for (int i=0; i<N-1; i++) {
        for (int j=0; j<M-1; j++) {
            for (int k=1; k<min(M-j, N-i); k++) {
                if ((square[i][j]==square[i+k][j])&&(square[i][j]==square[i][j+k])&&(square[i][j]==square[i+k][j+k])) {
                    if (pow(k+1,2)>max){ 
                        max = pow(k+1,2); 
                    }
                }
            }
        }
    }

    cout<<max;
}
