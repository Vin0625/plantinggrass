#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct work
{
    int T;
    int P;
};

int main()
{
    int n;

    cin >> n;

    vector<work> pay(n + 1);
    vector<int> answer(n + 2);

    for (int i = 1; i <= n; i++)
    {
        cin >> pay[i].T >> pay[i].P;
    }

    for (int i = n; i > 0; i--)
    {
        if (pay[i].T + i > n + 1)
        {
            answer[i] = answer[i + 1];
        }
        else
        {
            answer[i] = max(answer[i + 1], answer[pay[i].T + i] + pay[i].P);
        }
    }

    cout << answer[1];
}