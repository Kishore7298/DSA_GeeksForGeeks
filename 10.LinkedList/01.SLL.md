## Implementation of Singly linked list

```c++
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
/*
Insert an element at the beginning of the linkedlist
*/
Node *insertBegin(Node *head, int elem)
{
    Node *newNode = new Node(elem);
    newNode->next = head;
    return newNode;
}

/*
Insert the element at the end of the linkedlist
*/
Node *insertEnd(Node *head, int elem)
{
    if (head == NULL)
    {
        return new Node(elem);
    }
    Node *curr = head;
    while (curr->next != NULL)
        curr = curr->next;
    Node *newNode = new Node(elem);
    curr->next = newNode;
    return head;
}

Node *deleteElem(Node *head, int elem)
{
    int count = 0;
    if (head == NULL)
    {
        return NULL;
    }
    if (elem == 0)
    {
        Node *item = head;
        head = head->next;
        free(item);
        return head;
    }
    Node *curr = head;
    while (curr != NULL && count + 1 != elem)
    {
        curr = head->next;
        count++;
    }
    if (curr->next == NULL)
    {
        //delete the last element;
        return head;
    }
    Node *item = curr->next;
    curr->next = curr->next->next;
    free(item);
    return head;
}

void printLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    int q;
    cin >> q;
    Node *head = NULL;
    while (q--)
    {
        int op, elem;
        /*
            1. 1 x insert x at the beginning of the linkedlist.
            2. 2 x insert x at the end of the linkedlist.
            3. 3 x delete xth element from the linkedlist.
            4. 4 Print the linkedlist.
        */
        cin >> op;
        if (op == 1)
        {
            cin >> elem;
            head = insertBegin(head, elem);
        }
        else if (op == 2)
        {
            cin >> elem;
            head = insertEnd(head, elem);
        }
        else if (op == 3)
        {
            cin >> elem;
            head = deleteElem(head, elem);
        }
        else if (op == 4)
        {
            printLL(head);
        }
        else
        {
            cout << "Invalid operation" << endl;
        }
    }
}
```
