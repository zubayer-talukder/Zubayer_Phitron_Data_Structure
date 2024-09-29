#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int arr[n], prefixsum[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    prefixsum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        prefixsum[i] = arr[i] + prefixsum[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << prefixsum[i] << " ";
    }

    return 0;
}
