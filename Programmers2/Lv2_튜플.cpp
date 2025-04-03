#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<vector<int>> parse; 
    //각 집합의 숫자 추출하기
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == '{') {
            i++;
            vector<int> nums;
            string temp;
            while (s[i] != '}') {
                if (isdigit(s[i])) {
                    temp += s[i];
                } else if (s[i] == ',') {
                    if (!temp.empty()) {
                        nums.push_back(stoi(temp));
                        temp.clear();
                    }
                }
                i++;
            }
            if (!temp.empty()) nums.push_back(stoi(temp));
            parse.push_back(nums);
        }
    }

    // 크기순 정렬
    sort(parse.begin(), parse.end(), [](vector<int>& a, vector<int>& b) {
        return a.size() < b.size();
    });

    unordered_set<int> seen;
    //튜플로 만들기
    for (auto& group : parse) {
        for (int num : group) {
            if (seen.find(num) == seen.end()) {
                seen.insert(num);
                answer.push_back(num);
                break; // 각 집합에서 하나만 추가
            }
        }
    }

    return answer;
}
