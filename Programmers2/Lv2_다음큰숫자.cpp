#include <string>
#include <vector>

using namespace std;

int binaryonecount(int num){
    int n=0;
    while (num>0)
    {
        if(num%2==1){
            n++;
        }
        num/=2;
    }
    
    return n;
}

int solution(int n) {
    int answer = 0;
    int nonenum=binaryonecount(n);
    int i=1;
    while(1){
        if(binaryonecount(n+i)==nonenum){
            answer=n+i;
            break;
        }
        i++;
    }

    return answer;
}