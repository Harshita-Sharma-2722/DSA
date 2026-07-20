#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int>v; // size=0,capacity=0
   cout<<"insertion\tSize\tcapacity\n";
   for(int i=1;i<=20;i++)
   {
       v.push_back(i);
       cout << i << "\t\t"
             << v.size() << "\t"
             << v.capacity() << endl;
   }
   return 0;
}