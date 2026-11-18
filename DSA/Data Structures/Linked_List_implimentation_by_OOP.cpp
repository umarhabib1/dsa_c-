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

    void pop_back()
    {
        if(head == NULL){
        cout << " Linked List is empty" << endl;
        return;       
        }
        if (head == tail)
        {
            delete head;
            head = tail = nullptr;
            return;
        }
        Node* temp = head;
        while ((*temp).next != tail)
        {
            temp = (*temp).next;
        }
        temp->next = nullptr;
        delete tail;
        tail = temp;
    }

    void insert(int val,int position){
        if(position < 0){
            return;
        }
        if (position == 0)
        {
            push_front(val);
            return;
        }

        Node* temp = head;
        for (int i = 0; i < position -1 && temp != NULL; i++)
        {
            temp = (*temp).next;
        }

        if (temp == NULL)
        {
            cout << "Invalid position" << endl;
            return;
        }
        

        Node* newNode = new Node(val);
        (*newNode).next = (*temp).next;
        (*temp).next = newNode;

        if ((*newNode).next == NULL)
        {
            tail = newNode;
        }
        
    }

    int search(int key){
        int position = 0;
        Node* temp = head;

        while (temp != NULL)
        {
            if (key == (*temp).data)
            {
                return position;
            } 
            temp = (*temp).next;
            position ++;
        }
        return -1;
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
    // ll.push_back(99);
    // ll.pop_front();
    // ll.pop_back();

    
    // ll.insert(4,3);

    cout<<ll.search(2);

    // ll.Show_Tail_Head();

    // ll.Display();

    return 0;
}
