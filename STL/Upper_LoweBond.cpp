#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 2, 2, 5, 7, 9};

    int n;
    cout << "Enter element: ";
    cin >> n;

    auto lb = lower_bound(v.begin(), v.end(), n);// equal and greator to the enter element
    auto ub = upper_bound(v.begin(), v.end(), n);// greator then enter the element

    if (lb != v.end())
        cout << "Lower Bound = " << *lb << endl;
    else
        cout << "Lower Bound not found" << endl;

    if (ub != v.end())
        cout << "Upper Bound = " << *ub << endl;
    else
        cout << "Upper Bound not found" << endl;

    return 0;
}