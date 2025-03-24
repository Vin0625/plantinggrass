#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int check=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n;j++){
            check+=(i+j);
            if(check==n){
                answer++;
                break;
            }else if(check>n){
                break;
            }
        }
        check=0;
    }
    return answer;
}