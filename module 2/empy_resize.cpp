#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> x;
    // cout<<x.empty();
    // vector empty kina oita bole dey
    x.push_back(32);
    x.push_back(74);
    x.push_back(85);
    x.push_back(32);
    x.push_back(74);
    x.push_back(84);
    cout << "Before Resize: " << x.size() << endl;
    // size deklam

    for (int y : x)
    {
        cout << y << " ";
    }
    cout << endl;
    cout << endl;

    // resize  kora er  porer
    x.resize(4);
    // resize matro 5 ta element rake baki gula delete kore dise

    cout << "After Resize: " << x.size() << endl;
    // size deklam

    for (int y : x)
    {
        cout << y << " ";
    }
    cout << endl;
    cout << endl;


x.resize(9,233);
 cout << "After Resize and Replace: " << x.size() << endl;
    // size deklam oita prothome agger ta copy korse baki gula 233 dia replace dise

    for (int y : x)
    {
        cout << y << " ";
    }
    cout << endl;
    return 0;
}
