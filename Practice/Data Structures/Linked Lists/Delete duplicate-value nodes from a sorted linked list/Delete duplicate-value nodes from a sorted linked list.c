SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    struct SinglyLinkedListNode* temp = head;
        while(temp!=NULL){
            struct SinglyLinkedListNode* temp1 = temp->next;
            struct SinglyLinkedListNode* temp1prev = temp;
            while(temp1!=NULL){
                if(temp->data == temp1->data){
                    struct SinglyLinkedListNode* tempfree = temp1;
                    temp1prev->next = tempfree->next;
                    free(tempfree);
                }
                else temp1prev = temp1;
                temp1 = temp1->next;
            }
            temp = temp->next;
        }
        return head;

}