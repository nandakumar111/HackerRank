SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* temp = (struct SinglyLinkedListNode*) malloc(sizeof(struct SinglyLinkedListNode));
    temp->data =  data;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }else{
        struct SinglyLinkedListNode* pref = (struct SinglyLinkedListNode*) malloc(sizeof(struct SinglyLinkedListNode));
        pref = head;
        while(--position && pref->next!=NULL){
            pref = pref->next;
        }
        temp->next = pref->next;
        pref->next = temp;
    }
    return head;

}