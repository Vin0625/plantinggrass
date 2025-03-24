#include <string>
#include <vector>
#include <iostream>

using namespace std;
string solution(string s) {
    string answer = s;

    int makeup=0;

    for(int i=0;i<answer.size();i++){
        if('a'<=answer[i]&&answer[i]<='z'&&makeup==0){
            answer[i]-=32;
            makeup=1;
        }else if('A'<=answer[i]&&answer[i]<='Z'&&makeup==1){
            answer[i]+=32;
        }
        else if(answer[i]==' '){
            makeup=0;
        }else{
            makeup=1;
        }
    }
    return answer;
}

int main(){
    string s="3people unFollowed me";

    s=solution(s);
    cout<<s;
    return 0;
}
