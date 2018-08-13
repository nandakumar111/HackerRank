SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    if (head == NULL || head->next == NULL) {  
        return head;  
    }
    struct SinglyLinkedListNode* temp = (struct SinglyLinkedListNode*)malloc(sizeof(struct SinglyLinkedListNode));
    temp = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return temp;
}