#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    int yes=1;
    //want 는 사려는 물건
    //number는 사려는 물건의 개수
    //discount는 할인하는 물건의 순서

    for(int i=0;i<discount.size()-9;i++){
        unordered_map<string,int> sale;

        //10일동안 세일하는 물건들을 정리
        for(int j=i;j<i+10;j++){
            //세일 품목이 없으면
            if(sale.find(discount[j])==sale.end()){
                sale.insert({discount[j],1});
            }else{//세일품목이 존재하면
                sale[discount[j]]++;
            }
        }

        //사려는 조건에 맞는지 확인
        for(int k=0;k<want.size();k++){
            //원하는 물건이 없을경우
            if(sale.find(want[k])==sale.end()){
                yes=0;
                break;
            }else{
                //물건이 있지만 적을경우
                if(sale[want[k]]<number[k]){
                    yes=0;
                    break;
                }
            }
        }

        if(yes==1){
            answer+=1;
        }else{
            yes=1;
        }

    }

    return answer;
}