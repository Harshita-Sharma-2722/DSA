#include<iostream>
using namespace std;
int main()
{
    char arr[26];
    cout<<"enter the elements= ";
    for(int i=0;i<26;i++){
        arr[i]='a'+i;
    }
    for(int i=0;i<26;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}