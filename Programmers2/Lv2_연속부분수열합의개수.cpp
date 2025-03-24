#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    int sum=0;
    map<int,int> map;
    for(int i=0;i<elements.size();i++){
        for(int j=0;j<elements.size();j++){
            for(int k=0;k<i+1;k++){
                sum+=elements[(j+k)%elements.size()];
            }
            if(map.find(sum)==map.end()){
                map.insert(make_pair(sum, 1));
            }
            sum=0;
        }
    }
    answer=map.size();
    return answer;
}