#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5]={4,6,11,2,8};
    int ans=INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<ans)
         ans=arr[i];
    }
    cout<<ans;
    return 0;
}