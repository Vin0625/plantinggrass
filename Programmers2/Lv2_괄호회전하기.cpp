#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

int solution(string s) {
    int answer = 0;
    string copy_s=s;
    bool isperfect=true;
    for(int j=0;j<copy_s.length();j++){
        stack<char> stk;
        //완전괄호인지 확인
        for(int i=0;i<copy_s.length();i++){
            if(copy_s[i]=='['||copy_s[i]=='{'||copy_s[i]=='('){
                stk.push(copy_s[i]);
            }else{
                if(stk.empty()){
                    isperfect=false;
                    break;
                }else{
                    if(copy_s[i]=='}'&&stk.top()=='{'){
                        stk.pop();
                    }else if (copy_s[i]==']'&&stk.top()=='[')
                    {
                        stk.pop();
                    }else if (copy_s[i]==')'&&stk.top()=='(')
                    {
                        stk.pop();
                    }else{
                        isperfect=false;
                        break;
                    }
                }
            }
        }
        if(!stk.empty()){
            isperfect=false;
        }
        if(isperfect){
            answer++;
        }else{
            isperfect=true;
        }
        //왼쪽으로 하나 밀기
        copy_s.push_back(copy_s[0]);
        copy_s=copy_s.substr(1,copy_s.length()-1);
    }

    return answer;
}

