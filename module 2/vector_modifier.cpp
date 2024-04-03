#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector assign
    vector<int> x = {10, 20, 30, 55, 74, 89, 63, 14};
    vector<int> v = {8, 9, 1};

    // x=v; //assign vector
    // o(1)
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }
    // v.insert(v.begin()+1,100);
    // // v vector er vitore index 1 er pore  100 insert kore deya hoise
    // for(int k=0;k<v.size();k++){
    //     cout<<v[k]<< " ";
    // }
    // // output
    // // 8 100 9 1

    // akta vector er vitore arek ta vector diya insert kora

    // v.insert(v.begin()+0,x.begin(),x.end()-1);
    // // v.begin()  diya host re mention korse

    // // host er koto tuku crop kore dite hobe oita x.begin() ar x.end() eita dita bujay
    // for(int k=0;k<v.size();k++){
    //     cout<<v[k]<< " ";
    // }

    // //erase vector -->> 2 no index ta sudu delete hobe
    //  v.erase(v.begin()+2);
    //  for(int k=0;k<v.size();k++){
    //     cout<<v[k]<< " ";
    // }

    // erase vector -->> index 1 theke  index 4 projonto  delete hoye jabe
    // x.erase(x.begin() + 1, x.begin() + 4);
    // for (int k = 0; k < x.size(); k++)
    // {
    //     cout << x[k] << " ";
    // }
    

    // replace function: akta target e akta value diye repalce kore  
    vector<int> p={10,25,4,59,4,47,98,36,4,54,6,9};
    replace(p.begin(),p.end(),4,100);
for(int y=000;y<p.size();y++){
    cout<<p[y]<< " ";
}
        return 0;
}
