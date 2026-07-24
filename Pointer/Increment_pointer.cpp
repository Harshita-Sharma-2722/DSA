#include<iostream>
using namespace std;
int main()
{
    int num=10;
    int *p=&num;
    *p=*p+5;
    cout<<*p<<endl;
}