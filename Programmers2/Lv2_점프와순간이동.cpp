#include <iostream>
using namespace std;

int solution(int n)
{
    int ans = 0;
    int target=n;
    
    while (target>0)
    {
        ans+=target%2;
        target=target/2;
    }

    return ans;
}
