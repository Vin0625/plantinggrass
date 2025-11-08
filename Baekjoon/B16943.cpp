#include <iostream>
#include <vector>
#include <string>

using namespace std;

string A;
int B, C = -1;

void backtrack(vector<bool> visit, string cur, int d)
{
    if (d > A.size())
    {
        int num;
        num = stoi(cur);
        if (B > num && C < num)
        {
            C = num;
        }
        return;
    }

    for (int i = 0; i < A.size(); i++)
    {
        if (visit[i] == true || (d == 1 && A[i] == '0'))
        {
            continue;
        }
        else
        {
            cur.push_back(A[i]);
            visit[i] = true;
            backtrack(visit, cur, d + 1);
            visit[i] = false;
            cur.pop_back();
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> A >> B;

    vector<bool> visit(A.size(), false);
    string cur = "";

    backtrack(visit, cur, 1);

    cout << C;
}