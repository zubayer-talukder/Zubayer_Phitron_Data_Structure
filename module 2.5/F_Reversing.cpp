#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    // input taking
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // output giving
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
