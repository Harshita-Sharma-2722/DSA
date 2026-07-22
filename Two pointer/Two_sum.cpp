#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,7,11,15,27};
    int n=5;
    int target=22;
   int start=0,end=n-1;
   while(start<end)
   {
    if(arr[start]+arr[end]==target){
        cout << "found: " << arr[start] << " + " << arr[end] << " = " << target;
        return 0;
   }
     else if(arr[start]+arr[end]<target)
     {
          start++;
     }
     else
     end--;
   }
   cout<<"not found";
   return 0;
}