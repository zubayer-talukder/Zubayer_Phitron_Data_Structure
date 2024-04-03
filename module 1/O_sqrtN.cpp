#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for(int i=1;i<=sqrt(n);i++){
    //     if(n%i==0){
    //     cout<<i<<" x ";
    //     if(n/i!=i)cout<<n/i<<endl;

    // this code can be written like this
    for (int i = 0; i * i <= n; i++)
    {
        cout << i << endl;
        // this code is also example of // o(sqrt(n)) time complexity
    }

    return 0;
}
