#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    vector<int> vec(1000001, 0); 
    int G;
    int X;
    int maxX = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> G >> X; 
        vec[X] += G;  
        if (X > maxX)
            maxX = X; 
    }

    int range = 2 * K + 1;
    int ans = 0;
    int sum = 0;

    if (range >= maxX + 1)
    {
        for (int i = 0; i <= maxX; ++i)
        {
            sum += vec[i];
        }
        cout << sum << '\n';
        return 0;
    }

    for (int i = 0; i < range; ++i)
    {
        sum += vec[i];
    }
    ans = sum;

    for (int i = range; i <= maxX; ++i)
    {
        sum += vec[i] - vec[i - range];
        if (sum > ans)
            ans = sum;
    }

    cout << ans << '\n';
    return 0;
}
