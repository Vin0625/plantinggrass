#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";

    vector<int> vec;
    int num=0;
    string number;

    for(int i;i<s.size();i++){
        if(s[i]==' '){
            num=stoi(number);
            vec.push_back(num);
            number="";
        }else{
            number+=s[i];
        }
    }
    vec.push_back(stoi(number));
    sort(vec.begin(),vec.end());
    answer=to_string(vec[0]) + " "+to_string(vec[vec.size()-1]);
    return answer;
}