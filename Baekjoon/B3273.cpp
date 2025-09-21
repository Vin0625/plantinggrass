#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int x;

    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    cin >> x;

    int answer = 0;
    int i = 0, j = n - 1;

    while (i < j)
    {
        if (A[i] + A[j] == x)
        {
            answer++;
            i++;
            j--;
        }
        else if (A[i] + A[j] > x)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    cout << answer;
}