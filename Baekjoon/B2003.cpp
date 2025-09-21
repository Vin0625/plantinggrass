#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M;
    int answer = 0;

    cin >> N >> M;

    vector<long long> A(N + 1);
    int num;
    A[0] = 0;
    for (int i = 1; i <= N; i++)
    {
        cin >> num;

        A[i] = A[i - 1] + num;
    }

    int st, end;

    for (int i = 1; i <= N; i++)
    {
        st = i;
        end = i;

        while (end <= N)
        {
            if (A[end] - A[st - 1] == M)
            {
                answer++;
            }
            end++;
        }
    }

    cout << answer;
}