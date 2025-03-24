#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    int count=0;
    int num=666;
    string str;
    cin>>N;

    while(1){
        str=to_string(num);
        if(str.find("666")!=-1){
            count++;
            if(count==N){
                break;
            }
        }
        num++;
    }
    cout<<num;
}