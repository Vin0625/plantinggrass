#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int i=0;
    int j= people.size()-1;
    int sum=0;
    sort(people.begin(),people.end());

    while (i<=j)
    {   if(i==j){
        answer++;
        j--;
        }
        else if(people[i]+people[j]<=limit){
            sum=people[i]+people[j];
            i++;
            j--;
            answer++;
        }else{
            answer++;
            j--;
        }
    }
    
    return answer;
}