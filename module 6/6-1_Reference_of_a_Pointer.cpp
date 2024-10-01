#include <bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    cout << &p << endl;
}
int main()
{
    int value = 10;
    int *ptr = &value;
    fun(ptr);
    cout << &ptr << endl;
    return 0;
}

/* output Printing */
// here it is
/*

0x61ff08 --> Eita Holo Fun Function er Memory Address
0x61ff08--> Eita Holo main Function er Memory Address


?? Context Holo Je :
Eikhane Pointer er Value ta Referance kore dewa hoise , er mane holo fun Function e notun kore kono memory create kora hoy nai just "ptr" er memory ta direct access kora jabe , notun kore kono memory lagbe na


 */