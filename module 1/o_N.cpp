#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

        //ei loop er complexity holo--> o(n)
    }
    int s=0;
    for(int i=0;i<n;i++){
        s+=a[i]; 
//ei loop er complexity holo--> o(n)
    }
    // so total program er complexity holo --> o(n)
cout<<s<<endl;
return 0;
}
