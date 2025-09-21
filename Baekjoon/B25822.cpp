#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    float C;
    int N;

    cin >> C >> N;

    vector<int> problems(N);
    vector<int> check0;

    // 사용가능 Freeze계산
    int F = min(int(C / 0.99), 2);

    int maxvalue, maxdays, curday = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> problems[i];
        
        if (problems[i] == 0)
        {
            check0.push_back(i);
        }

        if(maxvalue < problems[i])
        {
            maxvalue = problems[i];
        }
    }


}