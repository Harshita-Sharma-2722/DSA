#include<iostream>
using namespace std;
int main()
{
   int arr[1000];
   int n;
   cout<<"enter no of numbers= ";
   cin>>n;
   cout<<"enter numbers= ";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   for(int i=n-2;i>=0;i--)
   {
      bool swapped=0;// swapping count initially
      for(int j=0;j<=i;j++)
      {
        if (arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=1;//at least one swap swapped will be 1
        }
      }
      if(swapped==0)//no swapped
      break;
   }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
   }
}