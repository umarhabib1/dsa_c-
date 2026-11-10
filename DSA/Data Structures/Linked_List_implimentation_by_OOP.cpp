#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    };
};

class list
{
    Node *head;
    Node *tail;

public:
    list()
    {
        head = NULL;
        tail = NULL;
    };

    void push_front(int val)
    {
        Node *newNode = new Node(val);          /*  int a;
                                                 int *ptr = new int(12);
                                                 // cout << (*ptr) - 2;
                                                 int *ptr1 = new int(50);
                                                 *ptr1 = 100;
                                                 cout << *ptr1;*/
        if (head == NULL)                    
        {
            head = tail = newNode;
            return;
        }
        else
        {
            (*newNode).next = head;
            head = newNode;
        }
    }

    void Display(){
        Node* temp = head;
        while(temp != NULL)
        {
            cout<<(*temp).data<<" ";
            temp = (*temp).next;
        }
        
    }
};

int main()
{
    list ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.Display();

    return 0;
}
