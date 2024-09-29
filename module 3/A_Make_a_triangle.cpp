#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    int required_increase = 0;
    if (a + b <= c)
    {
        required_increase = max(required_increase, c - (a + b) + 1);
    }
    else if (b + c <= a)
    {
        required_increase = max(required_increase, a - (c + b) + 1);
    }
    else if (a + c <= b)
    {
        required_increase = max(required_increase, b - (a + c) + 1);
    }

    cout << required_increase;
    return 0;
}
