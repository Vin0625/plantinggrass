#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    vector<string> sort_book;
    sort_book=phone_book;

    sort(sort_book.begin(),sort_book.end());

    for(int i=0;i<sort_book.size()-1;i++){
        if(sort_book[i+1].substr(0,sort_book[i].size())==sort_book[i]){
            answer=false;
        }
    }

    return answer;
}