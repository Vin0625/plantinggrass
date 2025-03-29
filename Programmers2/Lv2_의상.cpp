#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string,int> closet;
    
    for(int i=0;i<clothes.size();i++){
        if(closet.find(clothes[i][1])==closet.end()){
            closet[clothes[i][1]]=1;
        }else{
            closet[clothes[i][1]]++;
        }
    }

    for(const auto& pair:closet){
        answer*=(pair.second+1);
    }

    answer-=1;

    return answer;
}