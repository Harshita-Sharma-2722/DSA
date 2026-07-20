#include<iostream>
#include<vector>
#include<algorithm> //for count
using namespace std;
int main()
{
    vector<int>v={2,26,5,9,3,3};
    int n;
    cout<<"enter element to find= ";
    cin>>n;
    int occ=count(v.begin(),v.end(),n);
    cout<<"no of occurence= "<< n << " = "<< occ <<endl;
    return 0;
}