#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M, num;

    cin >> N;

    vector<int> A(N + 1, 0);

    for (int i = 1; i <= N; i++)
    {
        cin >> num;
        A[i] = A[i - 1] + num;
    }

    cin >> M;

    int st, end;

    for (int i = 0; i < M; i++)
    {
        cin >> st >> end;

        cout << A[end] - A[st - 1] << "\n";
    }
}