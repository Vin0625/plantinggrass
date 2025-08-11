#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main(){
    map<pair<int,int>,int> map;

    map[make_pair(1,2)]=2;

    cout<<map[make_pair(1,2)];
}