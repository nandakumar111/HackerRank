int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
     struct SinglyLinkedListNode* tempa = head1;
     struct SinglyLinkedListNode* tempb = head2;

    while(tempa != tempb){
        if(tempa->next == NULL){
            tempa = head2;
        }else{
            tempa = tempa->next;
        }
        if(tempb->next == NULL){
            tempb = head1;
        }else{
            tempb = tempb->next;
        }
    }
    return tempb->data;
}