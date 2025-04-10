#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(0);

    int S,P;
    string DNAstr;
    int A,C,G,T;
    cin>>S>>P;
    cin>>DNAstr;
    cin>>A>>C>>G>>T;

    int start=0;
    int end=P-1;
    int answer=0;
    int An=0,Cn=0,Gn=0,Tn=0;

    //초기 설정
    for(int i=start;i<P+start;i++){
            if(DNAstr[i]=='A'){
                An++;
            }
            if(DNAstr[i]=='C'){
                Cn++;
            }
            if(DNAstr[i]=='G'){
                Gn++;
            }
            if(DNAstr[i]=='T'){
                Tn++;
            }
    }
    if(An>=A&&Cn>=C&&Gn>=G&&Tn>=T){
        answer++;
    }
    start++;

    while (start+P-1<S)
    {
        if(DNAstr[start-1]=='A'){
            An--;
        }
        if(DNAstr[start-1]=='C'){
            Cn--;
        }
        if(DNAstr[start-1]=='G'){
            Gn--;
        }
        if(DNAstr[start-1]=='T'){
            Tn--;
        }
        if(DNAstr[start-1+P]=='A'){
            An++;
        }
        if(DNAstr[start-1+P]=='C'){
            Cn++;
        }
        if(DNAstr[start-1+P]=='G'){
            Gn++;
        }
        if(DNAstr[start-1+P]=='T'){
            Tn++;
        }
        if(An>=A&&Cn>=C&&Gn>=G&&Tn>=T){
            answer++;
        }
        start++;
    }
    
    cout<<answer;
}