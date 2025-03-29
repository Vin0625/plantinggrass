#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    vector<int> sortcitations=citations;
    
    sort(sortcitations.begin(),sortcitations.end());
    reverse(sortcitations.begin(),sortcitations.end());

      for (int i = 0; i <sortcitations.size(); i++) {
        if (sortcitations[i]>i) {
            answer++;
        }else{
            break;
        }
    }
    return answer;
}