int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    struct SinglyLinkedListNode* temp = head;
    struct SinglyLinkedListNode* res = head;
    int count =0;
    while(temp!= NULL){
        temp = temp->next;
        if (count++>positionFromTail)
        {
            res=res->next;
        }
    }
    return res->data;
}