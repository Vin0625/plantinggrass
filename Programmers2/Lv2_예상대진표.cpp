#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;

    while (a!=b)
    {
        if(a%2){
            a+=1;
        }
        a/=2;

        if(b%2){
            b+=1;
        }
        b/=2;

        answer++;
    }
    

    return answer;
}