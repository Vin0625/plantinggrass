#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int testcase;
    vector<int> current;
    vector<int> next;
    cin>>testcase;
    for(int i=0;i<testcase;i++){
        int k,n;
        cin>>k;
        cin>>n;
        current.resize(n+1);
        next.resize(n+1);
        for(int j=1;j<=n;j++){
            current[j]=j;
        }
        //원하는 층수와 호수까지 계산
        next[1]=1;
        for(int floor=1;floor<=k;floor++){
            for(int num=2;num<=n;num++){
                next[num]=0;
                for(int l=1;l<=num;l++){
                    next[num]+=current[l];
                }
            }
            current=next;
        }
        int answer=next.back();
        cout<<answer<<"\n";
    }
}