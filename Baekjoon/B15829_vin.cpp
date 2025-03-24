#include <iostream>
#include <string>

using namespace std;

int main(){
    int L;
    long M=1234567891;
    char ch;
    long long ASC;
    unsigned long long answer=0,mod=1;
    cin >>L;

    for(int i=0;i<L;i++){
        cin>>ch;
        ASC=ch-'a'+1;
        if(i!=0){
            mod=(mod * (31%M)) % M;
        }
        ASC=ASC%M;
        answer+=(ASC*mod)%M;
    }

    cout<<answer%M;
}