SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
 SinglyLinkedListNode *temp=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
 temp->data=data;
 temp->next=NULL;

 if(head==NULL){
     return temp;
 }
 if(position==0){
     temp->next=head;
     return temp;
 }

 SinglyLinkedListNode *current =head;
 while(position >1){
     current = current->next;
     position--;
 }
 temp->next=current->next;
 current->next=temp;
 return head;
}
