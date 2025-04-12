#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int N;
    int answer=0;

    cin>>N;

    vector<long long> numbers(N);

    for(int i=0;i<N;i++){
        cin>>numbers[i];
    }

    sort(numbers.begin(),numbers.end());


    for(int i=0;i<N;i++){
        int start=0;
        int end=N-1;

        while (start<end)
        {
            if(start==i){
                start++;
                continue;
            }
            if(end==i){
                end--;
                continue;
            }
            long long sum;
            sum=numbers[start]+numbers[end];

            if(sum==numbers[i]){
                answer++;
                break;
            }else if(sum<numbers[i]){
                start++;
            }else{
                end--;
            }
        }
        
    }
    
    cout<<answer;
}