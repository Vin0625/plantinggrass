#include <iostream>
#include <vector>

using namespace std;

int changenum(vector<int>& vec, int pivot,int high){
    int low=pivot+1;
    int nhigh=high;
    int num=vec[pivot];

    while (low<=nhigh)
    {
        while (num>vec[low]&&low<=high)
        {
            low++;
        }
        while (num<vec[nhigh]&&nhigh>pivot)
        {
            nhigh--;
        }

        if(low<=nhigh){
            int temp;
            temp=vec[low];
            vec[low]=vec[nhigh];
            vec[nhigh]=temp;
        }
        
    }

    int temp;
    temp=vec[pivot];
    vec[pivot]=vec[nhigh];
    vec[nhigh]=temp;
    
    return nhigh;
}

void quick_sort(vector<int>& vec,int low,int high){
    if(low<high){
        int pivot = changenum(vec,low,high);

        quick_sort(vec,low,pivot-1);
        quick_sort(vec,pivot+1,high);
    }
}

int main(){
    int N;
    cin>>N;
    vector<int> numbers(N);

    for(int i=0;i<N;i++){
        cin>>numbers[i];
    }

    quick_sort(numbers,0,numbers.size()-1);

    for(int i=0;i<N;i++){
        cout<<numbers[i]<<"\n";
    }

}