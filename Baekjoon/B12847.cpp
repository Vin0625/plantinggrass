#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    vector<int> T(n);

    for (int i = 0; i < n; i++)
    {
        cin >> T[i];
    }

    long long cur = 0;
    for (int i = 0; i < m; ++i)
    {
        cur += T[i];
    }
    long long best = cur;

    for (int i = m; i < n; ++i)
    {
        cur += T[i] - T[i - m];
        if (cur > best)
            best = cur;
    }

    cout << best;
}