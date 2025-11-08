#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cnt = 0;

void dfs(const vector<vector<int>> &g, vector<int> &visited, int u)
{
    visited[u] = ++cnt;
    for (int v : g[u])
    {
        if (visited[v] == 0)
        {
            dfs(g, visited, v);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M, R;
    cin >> N >> M >> R;

    vector<vector<int>> g(N + 1);
    for (int i = 0; i < M; ++i)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for (int i = 1; i <= N; i++)
    {
        sort(g[i].begin(), g[i].end());
    }

    vector<int> visited(N + 1, 0);
    dfs(g, visited, R);

    for (int i = 1; i <= N; i++)
    {
        cout << visited[i] << '\n';
    }
    return 0;
}
