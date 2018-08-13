SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    if(head==NULL){
        return head;
    }else{
        struct SinglyLinkedListNode* temp = (struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
        struct SinglyLinkedListNode* tempN = (struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
        temp = head;
        if(position == 0){
            tempN = temp->next;
            head = tempN;
            free(temp);
            return head;
        }
        while(position-- && temp->next!=NULL){
            tempN = temp;
            temp = temp->next;
        }
        tempN->next = temp->next;
        free(temp);
    }
    return head;
}