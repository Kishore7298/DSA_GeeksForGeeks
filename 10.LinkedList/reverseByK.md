## Reverse a Linked list by a group of size k

```
I/P: 10 -> 20 -> 30 -> 40 -> 50 -> 60 -> 70
O/P: 30 -> 20 -> 10 -> 60 -> 50 -> 40 -> 70
```

```c++
Node *reverseByK(Node* head, int k) {
    if(head == NULL)
        return NULL;
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;
    int count = 0;
    while(curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    Node *nextHead = reverseByK(curr, k);
    head->next = nextHead;
    return prev;
}
```
