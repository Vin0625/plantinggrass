#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    int T,answer;
    string str;

    cin >>T;
    for(int i=0; i<T;i++){
        stack<char> st;
        answer=1;
        cin>> str;
        for(int j=0;j<str.size();j++){
            if(st.empty()&&str[j]==')'){
                answer=0;
                break;
            }else if(str[j]=='('){
                st.push(str[j]);
            }else{
                st.pop();
            }
        }
        if(answer==0||!st.empty()){
            cout<<"NO"<<'\n';
        }else{
            cout<<"YES"<<'\n';
        }
    }
}