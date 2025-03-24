#include <iostream>
#include <string>

using namespace std;

int main(){
    while (true)
    {
        string str;
        cin>>str;

        if(str=="0"){
        break;
        }

        int i,j;
        i=0;
        j=str.length()-1;

        while (i<j)
        {
            if(str[i]!=str[j]){
                break;
            }
            i++;
            j--;
        }
    
        if(i<j){
            cout<<"no"<<endl;
        }else{
            cout<<"yes"<<endl;
        }
    }
    
    
    
    return 0;
}