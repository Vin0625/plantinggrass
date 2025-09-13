#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int num;
    long long answer = 0;

    cin >> N;

    vector<long long> nums(N + 1);
    vector<long long> sums(N + 1);

    sums[0] = 0;

    for (int i = 1; i <= N; i++)
    {
        cin >> num;
        nums[i] = num;
        sums[i] = sums[i - 1] + num;
    }

    for (int i = 1; i < N; i++)
    {
        answer += nums[i] * (sums[N] - sums[i]);
    }

    cout << answer;
}