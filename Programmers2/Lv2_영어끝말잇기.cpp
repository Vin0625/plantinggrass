#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    int wrong=0;

    for(int i=1;i<words.size();i++){
        //뒷글자와 첫글자가 이어지는지 확인
        if(words[i-1].back()!=words[i].front()){
            wrong=i;
            break;
        }
        //중복인지 확인
        for(int j=0;j<i;j++){
            if(words[j]==words[i]){
                wrong=i;
                break;
            }
        }
        if(wrong!=0){
            break;
        }
    }

    if(wrong==0){
        answer.push_back(0);
        answer.push_back(0);
    }else{
        wrong++;
        if(wrong%n==0){
            answer.push_back(n);
            answer.push_back(wrong/n);
        }else{
            answer.push_back(wrong%n);
            answer.push_back(wrong/n+1);
        }
    }

    return answer;
}