#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool Compare(pair<int, int>& A,pair<int, int>& B){
    if(A.second>B.second){
        return true;
    }else{
        return false;
    }
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    unordered_map<int,int> map;
    int num=k;
    for(int i : tangerine){
        map[i]++;
    }

    vector<pair<int,int>> tanvec(map.begin(),map.end()); 

    sort(tanvec.begin(),tanvec.end(),Compare);

    for(int i;i<tanvec.size();i++){
            num-=tanvec[i].second;
            answer++;
            if(num<=0){
                break;
            }
    }
    
    return answer;
}