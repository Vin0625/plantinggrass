#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> alpha(4);
vector<int> cnt(4);

bool checkpw(){
    bool ischecked=true;

    for(int i=0;i<4;i++){
        if(alpha[i]>cnt[i]){
            ischecked=false;
            break;
        }
    }

    return ischecked;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int S,P;
    int answer=0;
    string str;

    cin>>S>>P;
    cin>>str;

    //A C G T
    cin>>alpha[0]>>alpha[1]>>alpha[2]>>alpha[3];

    for(int i=0;i<P;i++){
        if(str[i]=='A'){
            cnt[0]++;
        }else if(str[i]=='C'){
            cnt[1]++;
        }else if(str[i]=='G'){
            cnt[2]++;
        }else{
            cnt[3]++;
        }
    }

    if(checkpw()){
        answer++;
    }

    for(int i=P;i<S;i++){
        //이전 것 뺴기
        if(str[i-P]=='A'){
            cnt[0]--;
        }else if(str[i-P]=='C'){
            cnt[1]--;
        }else if(str[i-P]=='G'){
            cnt[2]--;
        }else{
            cnt[3]--;
        }
        //추가된 것 더하기
        if(str[i]=='A'){
            cnt[0]++;
        }else if(str[i]=='C'){
            cnt[1]++;
        }else if(str[i]=='G'){
            cnt[2]++;
        }else{
            cnt[3]++;
        }

        if(checkpw()){
        answer++;
        }
    }

    cout<<answer;
}