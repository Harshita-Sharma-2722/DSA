#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,10,3,2,50,80};
    int n=6,index,i;
    for (int i=0;i<n-1;i++){
        index=i; // i=0,1,2,3___
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[index])
            index=j;
        }
        swap(arr[index],arr[i]);
    }
    cout<<"sorted= ";
    for(int i = 0; i < n; i++)
   {
    cout << arr[i] << " ";
   }
   cout << endl;
    int target=45;
   int start=0,end=1;
   while(end<n)
   {
    if(arr[end]-arr[start]==target){
        cout << "found: " << arr[end] << " - " << arr[start] << " = " << target;
        return 0;
   }
     else if(arr[end]-arr[start]<target)
     {
          end++;
     }
     else
     start++;
     
   }
    cout<<"not found";
    return 0;
}