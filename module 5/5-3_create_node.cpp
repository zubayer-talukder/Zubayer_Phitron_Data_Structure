#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
};
int main()
{
    Node a, b;
    a.value = 20;
    b.value = 50;

    a.next = &b;
    b.next = NULL;
    cout << a.value << endl;
    cout << a.next->value << endl;
    // it can be write this way also
    cout << (*a.next).value << endl; // same result paici ami

    // kind of dereferance kora : b er address e giya b er value print koro  ,
    return 0;
}
