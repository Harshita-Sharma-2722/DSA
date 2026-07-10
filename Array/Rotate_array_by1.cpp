#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size= ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements= ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int last=arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }    
    arr[0]=last;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}