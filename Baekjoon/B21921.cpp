#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x, n;

    cin >> n >> x;

    vector<int> visit(n);

    for (int i = 0; i < n; i++)
    {
        cin >> visit[i];
    }

    int cur = 0;
    for (int i = 0; i < x; ++i)
        cur += visit[i];

    int maxSum = cur;
    int cnt = 1;

    for (int i = x; i < n; ++i)
    {
        cur += visit[i] - visit[i - x];
        if (cur > maxSum)
        {
            maxSum = cur;
            cnt = 1;
        }
        else if (cur == maxSum)
        {
            cnt++;
        }
    }

    if (maxSum == 0)
    {
        cout << "SAD";
    }
    else
    {
        cout << maxSum << '\n'
             << cnt;
    }
}