#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector assign 
    vector<int>x={10,20,30};
    vector<int>v={8,9,1};
    
    // x=v; //assign vector
    //o(1)
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

//akta vector er vitore arek ta vector diya insert kora 

v.insert(v.begin()+0,x.begin(),x.end()-1);
// v.begin()  diya host re mention korse

// host er koto tuku crop kore dite hobe oita x.begin() ar x.end() eita dita bujay
for(int k=0;k<v.size();k++){
    cout<<v[k]<< " ";
}
return 0;
}
