#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n,key;
    cout<<"enter size= ";
    cin>>n;
    cout<<"enter the no= ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"key= ";
    cin>>key; 
    
    int start=0,end=n-1;
    while(start<=end)
    {
       int mid=start+(end-start/2);
       if(arr[mid]==key){
       cout<<mid;
       return 0;;
       }
       else if (arr[mid]<key)
           start=mid+1;  
       else
          end=mid-1;  

    }
    
    cout<<-1;// if key not present
    return 0;

//leetcode--
//arr becomes nums
// n becomes nums.size()
// key becomes target

}