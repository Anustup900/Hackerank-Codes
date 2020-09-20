  SinglyLinkedListNode *temp = (SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));

    if (temp == NULL) {
        exit(-1);
    }

    temp->data = data;
    temp->next = NULL;
    
    if(head!=NULL)
        temp->next=head;
        return temp;
    
