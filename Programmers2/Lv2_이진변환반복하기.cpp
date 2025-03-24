#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2,0);
    string st=s;
    string fi="";
    int num;

    while (st.size()>1)
    {   
        for(int i=0;i<st.size();i++){
            if(st[i]=='1'){
                fi.push_back(st[i]);
            }else{
                answer[1]++;
            }
        }

        num= fi.size();
        st="";
        fi="";

        answer[0]++;
        while(num>0){
            char ch;
            ch=num%2+'0';
            st.push_back(ch);
            num/=2;
        }

    }

    return answer;
}

int main(){
    vector<int> vec;
    string s="110010101001";
    vec=solution(s);

    cout<<vec[0]<<" "<<vec[1];

    return 0;
}