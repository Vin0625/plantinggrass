#include <iostream>
#include <vector>

using namespace std;

int answer = 0;
int N, K;
vector<int> training;

void backtrack(vector<bool> visit, int cur, int d)
{
    if (d > N)
    {
        answer++;
        return;
    }

    cur -= K;

    for (int i = 0; i < N; i++)
    {
        if (visit[i] || cur + training[i] < 500)
        {
            continue;
        }
        else
        {
            visit[i] = true;
            backtrack(visit, cur + training[i], d + 1);
            visit[i] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> K;
    training.resize(N);
    vector<bool> visit(N, false);

    for (int i = 0; i < N; i++)
    {
        cin >> training[i];
    }

    backtrack(visit, 500, 1);

    cout << answer;
}