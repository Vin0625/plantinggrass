#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int num=0;
    vector<int> F;

    F.push_back(0);
    F.push_back(1);

    for(int i=2;i<=n;i++){
        num=(F[i-2]+F[i-1])%1234567;;
        F.push_back(num);
    }

    answer=F[n]%1234567;

    return answer;
}