#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int Gcd(int a, int b){
    int A=max(a,b);
    int B=min(a,b);
  
    while (A%B!=0)
    {
        int gcd = A%B;
        A=B;
        B=gcd;
    }

    return B;
}

int solution(vector<int> arr) {
    int answer = arr[0];
    
    for(int i=1;i<arr.size();i++){
        int A=Gcd(arr[i],answer);
        int LCM= arr[i]*answer/A;
        answer=LCM;
    }

    return answer;
}