#include <iostream>
#include <string>

using namespace std;

int main(){
    int N;
    int team;
    int tone=0,ttwo=0;
    int pre=0,a1=0,a2=0;
    string time;
    cin>>N;
    for(int i=0;i<N;i++){
        cin >> team;
        cin>> time;
        if(i!=0){
            if(tone>ttwo){
                a1+=stoi(time.substr(0,2))*60+stoi(time.substr(3,2))-pre;
            }else if(ttwo>tone){
                a2+=stoi(time.substr(0,2))*60+stoi(time.substr(3,2))-pre;
            }
        }
        if(team==1){
            tone++;
        }else{
            ttwo++;
        }
        pre=stoi(time.substr(0,2))*60;
        pre+=stoi(time.substr(3,2));
    }
    if(tone>ttwo){
        a1+=48*60-pre;
    }else if(ttwo>tone){
        a2+=48*60-pre;
    }
    printf("%02d:%02d\n",a1/60,a1%60);
    printf("%02d:%02d",a2/60,a2%60);
}