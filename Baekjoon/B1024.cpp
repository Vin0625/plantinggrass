#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, L;

    bool isfind = false;
    vector<int> answer;
    cin >> N >> L;

    for (int i = L; i < 101; i++)
    {
        int start = 0;
        int sum = 0;
        while (sum < N)
        {
            sum = 0;
            answer.clear();
            for (int j = start; j < start + i; j++)
            {
                sum += j;
                answer.push_back(j);
            }
            if (sum == N)
            {
                isfind = true;
                break;
            }
        }
        if (isfind)
        {
            break;
        }
    }

    if (isfind)
    {
        for (int i = 0; i < answer.size(); i++)
        {
            cout<<answer[i];
        }
    }
    else
    {
        cout << -1;
    }
}