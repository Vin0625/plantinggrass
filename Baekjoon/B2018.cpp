#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    int answer=0;

    cin>>N;
    int start=1;
    int end=1;
    int sum=1;

    while (start<=N)
    {
        if(sum==N){
            answer++;
            sum-=start;
            start++;
        }else if (sum<N)
        {
            end++;
            sum+=end;
        }else{
            sum-=start;
            start++;
        }
        
    }
    cout<<answer;
    
}