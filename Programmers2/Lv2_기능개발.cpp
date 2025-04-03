#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> update;
    vector<int> working;

    update.assign(progresses.begin(),progresses.end());
    working.assign(speeds.begin(),speeds.end());

    while (!update.empty())
    {
        int upload=0;
        //완료 되면 지우기
        while(update[0]>=100&&!update.empty()){
            update.erase(update.begin());
            working.erase(working.begin());
            upload++;
        }

        if(upload>0){
            answer.push_back(upload);
        }
        
        //진행률 업데이트하기
        if(!update.empty()){
            for(int i=0;i<update.size();i++){
                update[i]+=working[i];
            }
        }
    }
    
    return answer;
}