#include<iostream>
using namespace std;
int main()
{
    int arr[18];
    int sum=0;
    float average;
    cout <<"18 no= ";
    for(int i=0;i<18;i++){
        cin>>arr[i];
    }
    for(int i=0;i<18;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    cout<<"average= "<<(float)sum/18;
    return 0;
}