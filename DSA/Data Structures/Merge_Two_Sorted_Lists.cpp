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
            cout << (*temp).data << "---> ";
            temp = (*temp).next;
        }
        cout<<endl;
    }

  void  reverseList(){
    Node* previous = nullptr;
    Node* current = head;
    Node* next = nullptr;

    tail = head;
    while (current != nullptr)
    {
        next = (*current).next;
        (*current).next = previous;
        previous = current;
        current = next;
    }
        head = previous;
  }

  /*
  void middleNode(){            
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;
    int size = 0;                               //
    while (temp != nullptr)                     //  Brute force approach
    {
        temp = (*temp).next;
        size ++;
    }
        temp = head;
        int middle = (size/2);
        for (int i = 0; i < middle; i++)
        {
            temp = temp->next;
        }
        cout<<temp->data<<endl;
  }
  */

  void middleNode(){            
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
       Node* fast = head;                                //  Optimal approach
       Node* slow = head;                                //
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = (*slow).next;
        fast = (*(*fast).next).next;
    }
    cout<<(*slow).data;
  }

  /*void mergeSorted(list &other)
    {
        if (other.head == nullptr)
        {
            return;
        }
        if (head == nullptr)
        {
            head = other.head;
            tail = other.tail;
            other.head = nullptr;
            other.tail = nullptr;
            return;
        }

        Node dummy(0);
        Node *current = &dummy;
        Node *ptr1 = head;
        Node *ptr2 = other.head;

        while (ptr1 != nullptr && ptr2 != nullptr)
        {
            if (ptr1->data <= ptr2->data)
            {
                current->next = ptr1;
                ptr1 = ptr1->next;
            }
            else
            {
                current->next = ptr2;
                ptr2 = ptr2->next;
            }
            current = current->next;
        }

        // Attach remaining nodes
        if (ptr1 != nullptr)
        {
            current->next = ptr1;
        }
        else
        {
            current->next = ptr2;
        }

        // Advance current to the true end so tail is accurate
        while (current->next != nullptr)
        {
            current = current->next;
        }

        head = dummy.next;
        tail = current;

        // Detach merged nodes from 'other'
        other.head = nullptr;
        other.tail = nullptr;
    }
*/
Node *mergeNodesRecursive(Node *a, Node *b)
    {
        if (a == nullptr)
        {
            return b;
        }
        if (b == nullptr)
        {
            return a;
        }

        if (a->data <= b->data)
        {
            a->next = mergeNodesRecursive(a->next, b);
            return a;
        }
        else
        {
            b->next = mergeNodesRecursive(a, b->next);
            return b;
        }
    }

    void mergeSortedRecursive(list &other)
    {
        if (other.head == nullptr)
        {
            return;
        }

        Node *newTail = nullptr;
        if (head == nullptr)
        {
            newTail = other.tail;
        }
        else if (other.tail == nullptr)
        {
            newTail = tail;
        }
        else
        {
            newTail = (tail->data >= other.tail->data) ? tail : other.tail;
        }

        head = mergeNodesRecursive(head, other.head);
        tail = newTail;

        other.head = nullptr;
        other.tail = nullptr;
    } 
};


int main()
{
    list list1;
    list1.push_back(1);
    list1.push_back(3);
    list1.push_back(5);
    list1.push_back(7);

    list list2;
    list2.push_back(2);
    list2.push_back(4);
    list2.push_back(6);
    list2.push_back(8);

    cout << "List 1: ";
    list1.Display();

    cout << "List 2: ";
    list2.Display();

    // list1.mergeSorted(list2);
    list1.mergeSortedRecursive(list2);

    cout << "Merged List: ";
    list1.Display();
    list1.Show_Tail_Head();

    return 0;
}
