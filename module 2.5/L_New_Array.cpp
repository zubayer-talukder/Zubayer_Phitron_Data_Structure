#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
 
 vector<int>arr1(n);
 vector<int>arr2(n);
 
// 1st vector input

    for(int i=0;i<n;i++){
cin>>arr1[i];
    }

//2nd array input
    for(int i=0;i<n;i++){
cin>>arr2[i];
    }


vector<int>ans (arr2);
ans.insert(ans.end(),arr1.begin(),arr1.end());
for(int i=0;i<ans.size();i++){
cout<< ans[i]<<" "; 
}
    
return 0;
}
