#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string str;
    cin>>str;

    vector<string> cal;
    string temp;
    for(int i=0;i<str.size();i++){
        if(str[i]=='-'){
            cal.push_back(temp);
            temp="";
        }else{
            temp+=str[i];
        }
    }
    cal.push_back(temp);
    temp="";
    int sum=0;

    for(int i=0;i<cal.size();i++){
        for(int j=0;j<cal[i].size();j++){
            if(cal[i][j]=='+'){
                if(i==0){
                    sum+=stoi(temp);
                }else{
                    sum-=stoi(temp);
                }
                temp="";
            }else{
                temp+=cal[i][j];
            }
        }
        if (!temp.empty()) {
            if(i==0){
                    sum+=stoi(temp);
                }else{
                    sum-=stoi(temp);
                }
            temp="";
        }
    }
    
    cout<<sum;
    
}