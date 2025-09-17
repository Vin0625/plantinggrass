#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin >> N;

    vector<int> vec(N);

    for (int i = 0; i < N; i++)
    {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    int st = 0, end = 4;
    int cur, max = 1;

    for (int i = 0; i < vec.size(); i++)
    {
        int j = 0;

        while (j < vec.size() && vec[j] - vec[i] <= 4)
        {
            j++;
        }

        if (j - i > max)
        {
            max = j - i;
        }
    }

    cout << 5 - max;
}