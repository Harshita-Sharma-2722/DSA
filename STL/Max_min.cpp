#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {12, 45, 7, 89, 23, 56};

    int maximum = *max_element(v.begin(), v.end());
    int minimum = *min_element(v.begin(), v.end());

    cout << "Maximum element = " << maximum << endl;
    cout << "Minimum element = " << minimum << endl;

    return 0;
}