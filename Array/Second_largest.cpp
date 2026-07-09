#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size= ";
    cin>>n;
    int arr[n];
    cout<<"enter the element= ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // find largest elememt
    int largest=arr[0];
    for (int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    //second largest element
    int secondlargest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest=arr[i];
        }
    }
    cout<<secondlargest;
    return 0;
}