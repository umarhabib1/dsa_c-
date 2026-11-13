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
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode; // int a;
            return;                //      int *ptr = new int(12);
        }
        else                       // cout << (*ptr) - 2;
        {
            (*newNode).next = head; // int *ptr1 = new int(50);
            head = newNode;         // *ptr1 = 100;
        }                            // cout << *ptr1;
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head != NULL)
        {
            (*tail).next = newNode;
            tail = newNode;
        }
        else
        {
            head = tail = newNode;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << " Linked List is empty" << endl;
            return;
        }
        if (head == nullptr)
        {
            tail = nullptr;
        }
        Node *temp = head;
        head = (*head).next;
        (*temp).next = nullptr;
        delete temp;
    }

    void Show_Tail_Head()
    {
        cout << "Head =" << (*head).data << endl;
        cout << "Tail = " << (*tail).data << endl;
    }

    void Display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << (*temp).data << " ";
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
    ll.push_back(99);
    ll.pop_front();

    // ll.Show_Tail_Head();

    ll.Display();

    return 0;
}
