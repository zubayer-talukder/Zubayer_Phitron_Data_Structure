#include <bits/stdc++.h>
using namespace std;
int main()
{
    // push back & pop back
    // syntax:
    // V.push_back(input)
    // V.pop_back(input)

    // push_back diya mainly data input dey
    //  ar pop_back diya mainly data remove kore

    vector<int> x;
    x.push_back(32);
    x.push_back(74);
    x.push_back(85);
    x.push_back(32);
    x.push_back(74);

    cout << x.size() << endl;
    // size deklam

    for (int y : x)
    {
        cout << y << " ";
    }
    cout<<endl;

    // output:
    // 5
    // 32 74 85 32 74

    x.pop_back();
    x.pop_back();
    for (int y : x)
    {
        cout << y << " ";
    }
    // output
    // 32 74 85 
    return 0;
}
