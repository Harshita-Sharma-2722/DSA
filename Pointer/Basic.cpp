#include<iostream>
using namespace std;
int main()
{
   int a=10;
   cout<<&a<<endl; // address of a
   int *ptr=&a;
   cout<<ptr<<endl; // address of a
   cout<<*ptr<<endl;// value inside a 
   cout<<sizeof(ptr)<<endl;
   a=30; // there is no int because it has declared previous
   cout<<*ptr<<endl;
}