#include <bits/stdc++.h>
using namespace std;
int main()
{
    // // type 1 vector input taking
    // int n;
    // cin>>n;
    // vector<int> BoB_cat(n);
    // for(int i=0;i<BoB_cat.size();i++){
    //     cin>>BoB_cat[i];
    // }
    // for(int val:BoB_cat){
    //     cout<<val<<" ";
    // }

    // Type 2:
    int n;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >>p;
         x.push_back(p);
    }
for(int val:x){
        cout<<val<<" ";
    }
    return 0;
}
