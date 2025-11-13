#include <iostream>
#include <vector>

using namespace std;

int answer = 100000000;
int start = 0;
vector<vector<int> > g;
int N;

void backtrack(int st, vector<bool> &visited, int price, int d)
{
    if (price >= answer)
    {
        return;
    }

    if (d == N)
    {
        if (g[st][start] && answer > price + g[st][start])
        {
            answer = price + g[st][start];
        }
        return;
    }

    for (int i = 0; i < N; i++)
    {
        if (!visited[i] && g[st][i])
        {
            visited[i] = true;
            backtrack(i, visited, price + g[st][i], d + 1);
            visited[i] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> N;

    g.resize(N, vector<int>(N));

    vector<bool> visited(N, false);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> g[i][j];
        }
    }

    visited[start] = true;
    backtrack(start, visited, 0, 1);

    cout << answer;
}