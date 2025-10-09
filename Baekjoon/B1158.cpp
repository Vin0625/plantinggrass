#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N, K;

    cin >> N >> K;

    queue<int> q;
    queue<int> answer;

    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }

    int index = 0;
    int front;
    while (!q.empty())
    {
        front = q.front();
        q.pop();
        if (++index == K)
        {
            answer.push(front);
            index = 0;
            continue;
        }
        q.push(front);
    }

    cout << "<" << answer.front();
    answer.pop();
    for (int i = 1; i < N; i++)
    {
        cout << ", " << answer.front();
        answer.pop();
    }
    cout << ">";
}