#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int N;
    int num;
    vector<int> numbers;
    cin>>N;

    for(int i=0;i<N;i++){
        cin>>num;
        numbers.push_back(num);
    }

    sort(numbers.begin(),numbers.end());

    for(auto n:numbers){
        cout<<n<<"\n";
    }
}