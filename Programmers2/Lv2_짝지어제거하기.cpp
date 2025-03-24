#include <iostream>
#include<string>
#include<stack>

using namespace std;

int solution(string s)
{
    string str=s;
    stack<char> st;
    int answer = -1;
    
        for(int i=0;i<str.size();i++){
            if(!st.empty()&&st.top()==str[i]){
                st.pop();
            }else{
                st.push(str[i]);
            }
        }
        
        if(st.empty()){
            answer=1;
        }else{
            answer=0;
        }

    return answer;
}