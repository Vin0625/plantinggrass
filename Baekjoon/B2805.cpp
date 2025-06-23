#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int N,M;
    int max=0;
    cin>>N>>M;

    vector<int> woods(N);

    for(int i=0;i<N;i++){
        cin>>woods[i];
        if(max<woods[i]){
            max=woods[i];
        }
    }

    int start=0;
    int end=max+1;
    int mid;
    bool isanswer;
    long long sum=0;
    while (start<end)
    {
        mid=(start+end)/2;
        sum=0;

        for(int i=0;i<N;i++){
            if(woods[i]>mid){
                sum+=woods[i]-mid;
            }
        }

        if(start+1==end){
            break;
        }

        if(sum<M){
            end=mid;
        }else if (sum>M){
            start=mid;
        }else{
            isanswer=1;
            break;
        }
    }
    if(isanswer){
        cout<<mid;
    }else{
        while (sum<M)
        {
            sum=0;
            mid--;
            for(int i=0;i<N;i++){
                if(woods[i]>mid){
                    sum+=woods[i]-mid;
                }
            }
        }
        cout<<mid;
    }
}