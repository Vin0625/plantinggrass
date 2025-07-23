#include <iostream>
#include <vector>
#include <string>
using namespace std;

int R, C, answer = 0;
vector<string> board;
bool visited[26];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0}; 

void dfs(int x, int y, int count) {
    answer = max(answer, count);

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

   
        if (nx >= 0 && ny >= 0 && nx < R && ny < C) {
            int idx = board[nx][ny] - 'A';
            if (!visited[idx]) {
                visited[idx] = true;
                dfs(nx, ny, count + 1);
                visited[idx] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> R >> C;
    board.resize(R);
    for (int i = 0; i < R; i++) {
        cin >> board[i];
    }

    visited[board[0][0] - 'A'] = true; 
    dfs(0, 0, 1); 

    cout << answer << "\n";
    return 0;
}
