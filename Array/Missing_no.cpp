#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,3,4,5,6};
    int sum=0,sum_total,n=6;
    //sum of all element in array
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    //sum of a no
    sum_total=n*(n+1)/2;
    cout<<sum_total-sum;
    return 0;

}