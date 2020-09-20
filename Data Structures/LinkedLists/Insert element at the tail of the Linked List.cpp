SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {



    SinglyLinkedListNode *temp = (SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));

    if (temp == NULL) {
        exit(-1);
    }

    temp->data = data;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
    } else {
        SinglyLinkedListNode* current  = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = temp;
    }

    return head;
}

