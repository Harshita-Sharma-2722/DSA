#include<iostream>
using namespace std;
int main()
{
    //size
    int n;
    cout<<"enter a size= ";
    cin>>n;
    // create an array
    int arr[n];
    //take element from user
    cout<<"enter the no= ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }// which element want to search
    int search ;
    cout<<"enter the element to search= ";
    cin>>search;
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            cout<<i;
            return 0;
        }
    }
    cout<<-1; // if the element is not found , print -1
}