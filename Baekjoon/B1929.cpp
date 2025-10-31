#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);

    int M, N;
    vector<bool> isprime(1000000 + 1, true);

    isprime[1]=false;

    cin >> M >> N;

    for (int i = 2; i * i <= N; i++)
    {
        if (isprime[i])
        {
            for (int j = i + i; j <= N; j += i)
            {
                isprime[j] = false;
            }
        }
    }

    for(int i=M;i<=N;i++){
        if(isprime[i]){
            cout<<i<<"\n";
        }
    }
}