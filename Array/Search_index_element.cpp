#include<iostream>
using namespace std;
int main()
{
    int arr[6]={10,20,7,11,8,4};
    int target=11;
    for(int i=0;i<6;i++){
        if(arr[i]==target){
            target=i;
            break;
        }
    }
    cout<<target;

}