#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size1, size2;
    cin >> size1;
    vector<long long int> arr1(size1);
    // array 1
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    cin >> size2;
    vector<int> arr2(size2);
    // array 2
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    int position;
    cin >> position;

    arr1.insert(arr1.begin() + position, arr2.begin(), arr2.end());

    for (auto j : arr1)
    {
        cout << j << " ";
    }
    return 0;
}
