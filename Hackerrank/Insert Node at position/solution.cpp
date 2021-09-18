SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode *toInsert = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *node = head;

    for (int i = 0; i < position - 1; i++) {
        node = node->next;
    }
    SinglyLinkedListNode *t;

    t = node->next; //after to insert
    node->next = toInsert;
    toInsert->next = t;

    return head;
}