#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    };
};
int main()
{
    Node *head = new Node(50); // eikhane node nijeii akta pointer eita 50 value er address rakhtese
    Node *a = new Node(60);    // eikhane node nijeii akta pointer eita 60 value er address rakhtese

    /* ei value gula use korte hoile  'head' object ar 'a' er object er moddhe linkup korate hobe  tai nicher eita diya link up kora bujay*/

    head->next = a; // eitar mane holo head object er adress er vitore a er value ami assign kore dici

    // just printing
    cout << head->value << endl;
    cout << head->next->value << endl; // head diyaii ami 'a' object er value print korte parbo
    // a value arek vabe o print kora jay oita holo
    cout << a->value << endl;
    return 0 ;
}
