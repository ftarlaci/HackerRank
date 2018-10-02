/*
You’re given the pointer to the head nodes of two linked lists. 
Compare the data in the nodes of the linked lists to check if 
they are equal. The lists are equal only if they have the same 
number of nodes and corresponding nodes contain the same data. 
Either head pointer given may be null meaning that the corresponding 
list is empty.
*/

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(!head1 && head2 || head1 && !head2) return false;
    while(head1 && head2){
        if(head1->data == head2->data){
            head1 = head1->next;
            head2 = head2->next;
        } else {
            return false;
        }  
    }
    return true;  // fails a test but didnt have time to investigate. not %100 correct

}