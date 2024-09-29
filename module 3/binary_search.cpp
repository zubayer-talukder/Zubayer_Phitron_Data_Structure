#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int x;
    cin >> x;
    int l = 0;
    int r = n - 1;
    bool flag = 0;
    while (l <= r)
    {
        int mid_index = (l + r) / 2;
        if (a[mid_index] == x)
        {
            flag = 1;
            break;
        }
        if (x > a[mid_index])
        { // mid point bam e jau
            l = mid_index + 1;
        }
        else
            r = mid_index - 1;
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
