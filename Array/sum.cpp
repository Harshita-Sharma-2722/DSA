#include<iostream>
using namespace std;
int main()
{
    int arr[20];
    int sum=0;
     cout<<"sum of 20= ";
    for(int i =0;i<20;i++){
        cin>>arr[i];
    }
    for(int i=0;i<20;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
    return 0;

    
}