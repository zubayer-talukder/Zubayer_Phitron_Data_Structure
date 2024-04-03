#include <bits/stdc++.h>
using namespace std;
int main()
{
    // case1:  Construct a vector with ) elements

    // vector<int> v;
    // cout<<v.size()<<endl;

    // // default vector size is zero

    // case 2: Construct a vector  with N elements and the value will be garbage

    //  vector<int > v(5);
    // cout<<v.size()<<endl;
    // // ei khane size 5 hoise
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    //     // size 5 hoise thik ase but each and every value hisebe default value ase 0

    //     // output ase
    //     // 0 0 0 0 0

    // }

    // case 3: Construct a vector  with N elements and the  value will be x
    // Syantax::  vector<type> V (N,x)

    // vector<int > v(5,29);
    // cout<<v.size()<<endl;
    // // ei khane size 5 hoise
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    //     // size 5 hoise thik ase but each and every value hisebe  value ase 29

    //     // output asce
    //     // 5
    //     // 29 29 29 29 29
    // }

    // case 4: Construct a vector  by copying another vector  X2

    // Syntax--::
    // vector<type> V(X2)

    vector<int> v(6, 100);
    vector <int >X(v);

        cout << X.size() << endl;

    for (int i = 0; i < X.size(); i++)
    {
        cout << X[i] << " ";
        // size 6 hoise thik ase but each and every value hisebe  value ase 100  ja copy kore X vector eo same ase

        // output asce
        // 6
        // 100 100 100 100 100 100 
    }
    return 0;
}
