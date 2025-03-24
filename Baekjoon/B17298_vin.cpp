#include <iostream>
#include <vector>

using namespace std;

int main(){

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    int N,num;
    vector<int> A;//수열저장

    cin>>N;

    vector<int> answer(N,-1);//정답 저장
    vector<int> cur;//아직 답이안정해진 위치저장

    for(int i=0;i<N;i++){
        cin>>num;
        A.push_back(num);
        while(!cur.empty()&&A[cur.back()]<num){

                answer[cur.back()]=num;//오큰수로 바꿔주기

                cur.pop_back();
        }
        cur.push_back(i);
    }

    for(int i=0;i<N;i++){
        cout<<answer[i]<<" ";
    }
}