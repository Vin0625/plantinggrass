#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;

    cin>>n;
    vector<long long> tri;
    tri.push_back(1);
    tri.push_back(1);
    tri.push_back(1);
    tri.push_back(2);
    tri.push_back(2);

    for(int j=5;j<=100;j++){
        tri.push_back(tri[j-1]+tri[j-5]);
    }

    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        cout<<tri[num-1]<<"\n";
    }

}