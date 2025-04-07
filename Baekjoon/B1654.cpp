#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    cin.tie();
    cout.tie();

    int K,N;
    vector<long long> lines;

    cin>>K>>N;

    for(int i=0;i<K;i++){
        long long line;
        cin>>line;
        lines.push_back(line);
    }
    
    sort(lines.begin(),lines.end());
    reverse(lines.begin(),lines.end());
    long long left=0;
    long long right=lines[0]+1;
    long long cutsize=(left+right)/2;
    long long linesnum=0;


    while (left+1<right)
    {
        for(int i=0;i<lines.size();i++){
            linesnum+=lines[i]/cutsize;
        }
        //작을때
        if(linesnum<N){
            right=cutsize;
            linesnum=0;
        }
        //클때
        if(linesnum>=N){
            left=cutsize;
            linesnum=0;
        }
        
        cutsize=(left+right)/2;
    }

    cout<<cutsize;

}