// reverse and print an LL

void reversePrint(SinglyLinkedListNode* head) {
    if(!head || head->next == nullptr) return;
    SinglyLinkedListNode* prev = head; // prev now points to wherever "head" is pointing to.
        SinglyLinkedListNode* curr = prev->next; 
        while (curr) {
            prev->next = curr->next;
            curr->next = head;
            head = curr;
            curr = prev->next;
        }
        while(head) {
            cout << head->data << endl;
            head = head->next;
        }

}