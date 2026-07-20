#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)//void means the func does not return anything
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    display(v);

    return 0;
}