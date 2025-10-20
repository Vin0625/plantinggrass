#include <iostream>

using namespace std;

int main()
{
    int T;

    int dp0[41] = {0};
    int dp1[41] = {0};

    dp0[0] = 1;
    dp0[1] = 0;

    dp1[1] = 1;

    for (int i = 2; i < 41; i++)
    {
        dp0[i] = dp0[i - 1] + dp0[i - 2];
        dp1[i] = dp1[i - 1] + dp1[i - 2];
    }

    cin >> T;

    for (int k = 0; k < T; k++)
    {
        int n;
        cin >> n;

        cout << dp0[n] << " " << dp1[n] << "\n";
    }
}