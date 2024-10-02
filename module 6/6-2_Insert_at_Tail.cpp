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

void Insert_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value); // newnode nam er akta instance toiri korci

    if (head == NULL) // akdom first e jodi head e kisuui na thake tahole
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    // amra head niya kokun o kheli na , tai head ta re safely akta variable e rakci

    while (temp->next!= NULL) // head e already kisu ase tahole ei condition ta akn colbe
    {
        temp = temp->next;

        // logic ta hosse linked list er tail er memory address ta newa , memory address ta paua geleyi oi last node e arekta node er address inset kore dibo taholeii kaj khotom hoye jabe

    } // tmp ekhon last node e ase
    temp->next = newNode; // last node tare arakta node er sathe link kore dilam arki
}

void Print_linked_list(Node* v)
{
    
    cout<<"You have entered this Linked List: ";
    Node *temp=v;
    while (temp!=NULL)
    {
       cout<<temp->value<<" ";
       temp=temp->next;
    }
    cout <<endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Terminate the Code" << endl;
  
    int option;
    cin >> option;
    if (option == 1)
    {
        cout << "Please Enter The Value: " << endl;
        int v;
        cin >> v;
        Insert_at_tail(head, v);
    }
    else if (option == 2)
    {
      Print_linked_list(head);
    }
    else if (option == 3)
    {
        cout << "Terminated from the program: " << endl;
       break;
    }
  }
    return 0;
}
