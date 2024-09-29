#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    // constructor makeing kora hosse
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    };
};
int main()
{
    /* there is no need to this below line because i have created a  constucture


    Node a, b;
     a.value = 20;
     b.value = 50;

     b.next = NULL;
     */

    /*Call the consturcture */
    Node a(43);
    Node b(32);
    a.next = &b;
    cout << a.value << endl;
    cout << a.next->value << endl;
    // it can be write this way also
    cout << (*a.next).value << endl; // same result paici ami
    cout << b.value << endl;
    // kind of dereferance kora : b er address e giya b er value print koro  ,

    cout << b.next->value << endl;

    return 0;
}
