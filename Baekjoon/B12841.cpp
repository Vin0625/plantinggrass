#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int num, answer;
    long long min = 10000000001;

    cin >> n;

    vector<int> cross(n + 1);
    vector<long long> left(n, 0);
    vector<long long> right(n, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> cross[i];
    }

    for (int i = 1; i <= n - 1; i++)
    {
        cin >> num;
        left[i] = left[i - 1] + num;
    }

    for (int i = 1; i <= n - 1; i++)
    {
        cin >> num;
        right[i] = right[i - 1] + num;
    }

    long long sum;

    for (int i = 1; i <= n; i++)
    {
        sum = cross[i] + left[i - 1] + right[n - 1] - right[i - 1];

        if (sum < min)
        {
            answer = i;
            min = sum;
        }
    }

    cout << answer << " " << min;
}