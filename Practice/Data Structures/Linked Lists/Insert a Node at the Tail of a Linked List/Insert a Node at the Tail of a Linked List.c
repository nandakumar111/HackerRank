SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    struct SinglyLinkedListNode* newn =  (struct SinglyLinkedListNode *)malloc(sizeof(struct SinglyLinkedListNode));
    newn->next=NULL;
    newn->data=data;
    if(head == NULL){
        head = newn;
    }else{
        struct SinglyLinkedListNode* temp =  (struct SinglyLinkedListNode *)malloc(sizeof(struct SinglyLinkedListNode));
        temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next=newn;
    }
    return head;
}