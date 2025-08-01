#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M, answer = 0, count = 0;
    cin >> N >> M;

    string S;
    cin >> S;

    for(int i = 1; i < M - 1; ){
        if(S[i-1] == 'I' && S[i] == 'O' && S[i+1] == 'I') {
            count++;
            i += 2;
            if(count == N) {
                answer++;
                count--; 
            }
        } else {
            i++;
            count = 0;
        }
    }

    cout << answer;
    return 0;
}
