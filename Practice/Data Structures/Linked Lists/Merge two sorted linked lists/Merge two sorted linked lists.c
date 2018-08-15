SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    struct SinglyLinkedListNode* merge = (struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    merge = NULL;
    while(head1 != NULL || head2 != NULL){
        struct SinglyLinkedListNode* mergetemp = merge;
        struct SinglyLinkedListNode* temp = (struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
        temp->next = NULL;
        if(head1!=NULL && (head2==NULL || head1->data < head2->data)){
            temp->data = head1->data;
            head1 = head1->next;
        }else{
            temp->data = head2->data;
            head2 = head2->next;
        }
        if(merge==NULL){
            merge = temp;
        }else{
            while(mergetemp->next != NULL)
                mergetemp = mergetemp->next;
            mergetemp->next = temp;
        }
    }
    return merge;

}