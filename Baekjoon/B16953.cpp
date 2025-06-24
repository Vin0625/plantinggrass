#include <iostream>
#include <string>

using namespace std;

int main(){
    long long A,B;
    int answer=1;
    cin>>A>>B;

    while (A<B)
    {
        if(B%2==0){
            B/=2;
        }else if (B%10==1)
        {
            B/=10;
        }else
        {
            break;
        }
        answer++;
    }
    if(A==B){
        cout<<answer;
    }else{
        cout<<"-1";
    }
}