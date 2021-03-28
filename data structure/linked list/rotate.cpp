Node* rotate(Node* head, int k)
{
    if (k == 0) return head;

    Node *walk = head;
    Node *prev;

    while( k-- && walk!=NULL )
    // this loop is run k number of times
    // walk pointer moves k nodes ahead and reaches new head node
    {
        prev = walk;
        walk = walk->next;
    }
    if(!walk) return head; // considering edge case, i.e. if k==n

    Node* newHead = walk;
    // since 'prev' points to the node placed before newHead
    // it is new tail, hence prev->next should be NULL
    prev->next = NULL;

    while( walk->next )
        // walking till the last node
        walk = walk->next;

    // connecting last node to old head
    walk->next = head;
    return newHead;
}
