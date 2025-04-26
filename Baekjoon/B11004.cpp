#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N, K;
    cin >> N >> K;

    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    nth_element(nums.begin(), nums.begin() + K - 1, nums.end());

    cout << nums[K-1];
}


/*
int divide(vector<int>& vec,int pivot,int high){
    int h=high;
    int l=pivot+1;

    int r = pivot + rand() % (high - pivot + 1);
    swap(vec[pivot], vec[r]);

    while (l<=h)
    {
        while (vec[pivot]>vec[l]&&l<=high)
        {
            l++;
        }

        while (vec[pivot]<vec[h]&&h>pivot)
        {
            h--;
        }

        if(l<h){
            int temp=vec[l];
            vec[l]=vec[h];
            vec[h]=temp;
        }
    }

    int temp=vec[h];
    vec[h]=vec[pivot];
    vec[pivot]=temp;    

    return h;
}

int quick_select(vector<int>& vec,int low, int high,int K){
    if(low<=high){
        int pivot=divide(vec,low,high);

        if(pivot==K){
            return vec[pivot];
        }else if (pivot>K)
        {
            return quick_select(vec,low,pivot-1,K);
        }else{
            return quick_select(vec,pivot+1,high,K);
        }
    }
}

int main(){
    srand(time(0));
    ios::sync_with_stdio(0), cin.tie(0);
    int N,K;

    cin>>N>>K;

    vector<int> nums(N);

    for(int i=0;i<N;i++){
        cin>>nums[i];
    }

    cout<<quick_select(nums,0,nums.size()-1,K-1);

}
*/