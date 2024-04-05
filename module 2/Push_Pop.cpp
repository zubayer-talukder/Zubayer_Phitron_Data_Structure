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
    cout << endl;

    // output:
    // 5
    // 32 74 85 32 74

    x.pop_back();
    x.pop_back();
    for (int y : x)
    {
        cout << y << " ";
    }
    cout << endl;
    // output
    // 32 74 85

    // vector clear::
    x.clear(); // clear just element gula delete korer memory theke delete kore na

    for (int y : x)
    {
        cout << y << " ";
    } // ei jonno ei loop theke kono return dey nai karon holo je ei loop er element gula delete kora hoise


// memeory theke access korar upay holo
cout<<x[2];
// return 85 dise tai eita proved je memory thrke  delete kore na 
// v.clear() ei function ta


    return 0;
}
