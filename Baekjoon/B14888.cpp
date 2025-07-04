#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Maxnum = -1000000000;
int minnum = 1000000000;
int opercount = 0;
int numscount = 0;
vector<int> nums;

void backtrack(int curnums_idx, vector<int> curoper, int current_result) {
    if (curnums_idx == numscount) {
        Maxnum = max(Maxnum, current_result);
        minnum = min(minnum, current_result);
        return;
    }

    for (int i = 0; i < 4; ++i) {
        if (curoper[i] > 0) {
            curoper[i]--;
            int next_result = current_result;

            if (i == 0) {
                next_result += nums[curnums_idx];
            } else if (i == 1) {
                next_result -= nums[curnums_idx];
            } else if (i == 2) {
                next_result *= nums[curnums_idx];
            } else {
                next_result /= nums[curnums_idx];
            }

            backtrack(curnums_idx + 1, curoper, next_result);

            curoper[i]++;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    numscount = n;

    nums.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<int> oper(4);
    for (int i = 0; i < 4; ++i) {
        cin >> oper[i];
        opercount += oper[i];
    }

    backtrack(1, oper, nums[0]);

    cout << Maxnum << '\n';
    cout << minnum << '\n';

    return 0;
}