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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // Assigning Linked List address
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    /* Ei vabe head ke teransfer korle , pore head er upor kaj kora possible hobe na , tai amra head er upor ei vabe kaj kori na */

    /*
        while (head!=NULL)
        {
            cout<<head->value<<endl;
            head=head->next;
            // it will increase next head value
        } */

    Node *temp;  // node er instance temp toiri korlam jate pore amra kaj korte pari
    temp = head; // temp address er vitore head er address assign korci
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }

    return 0;
}
