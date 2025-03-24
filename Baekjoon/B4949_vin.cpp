#include <iostream>
#include <stack>

using namespace std;

int main(){
    while(1){
        string str;
        getline(cin,str);//한줄 입력받음

        if(str[0]=='.'){
            break;
        }

        int wrong=0;
        stack<char> st;

        for(int i=0;i<str.size();i++){
            if(st.empty()&&str[i]==')'||st.empty()&&str[i]==']'){
                wrong++;
                break;
            }else if(str[i]=='('||str[i]=='['){
                st.push(str[i]);
            }else if(str[i]==')'){
                if(st.top()=='('){
                    st.pop();
                }else{
                    wrong++;
                    break;
                }
            }else if(str[i]==']'){
                if(st.top()=='['){
                    st.pop();
                }else{
                    wrong++;
                    break;
                }
            }
        }

        if(wrong>0||!st.empty()){
            cout<<"no"<<'\n';
        }else{
            cout<<"yes"<<'\n';
        }
    }
}