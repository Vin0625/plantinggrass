#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int N,M;
    int time=0;
    cin>>N;
    vector<int> crain(N);

    for(int i=0;i<N;i++){
        cin>>crain[i];
    }
    cin>>M;
    vector<int> boxes(M);
    for(int i=0;i<M;i++){
        cin>>boxes[i];
    }

    sort(crain.begin(),crain.end());
    sort(boxes.begin(),boxes.end());

    if(boxes[M-1]>crain[N-1]){
        cout<<"-1";
        return 0;
    }

    while (!boxes.empty())
    {
        for(int i=N-1;i>=0;i--){
            for(int j=boxes.size()-1;j>=0;j--){
                if(crain[i]>=boxes[j]){
                    boxes.erase(boxes.begin()+j);
                    break;
                }
            }
        }
        time++;
    }

    cout<<time;
}