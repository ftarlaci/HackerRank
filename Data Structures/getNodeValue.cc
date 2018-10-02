/*
You’re given the pointer to the head node of a linked 
list and a specific position. Counting backwards from 
the tail node of the linked list, get the value of the 
node at the given position. A position of 0 corresponds 
to the tail, 1 corresponds to the node before the tail and so on.
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

/*
You’re given the pointer to the head node of a linked list and a specific position. Counting backwards from the tail node of the linked list, get the value of the node at the given position. A position of 0 corresponds to the tail, 1 corresponds to the node before the tail and so on.
*/
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    if(!head) return 0;
    SinglyLinkedListNode* prev = head;
    SinglyLinkedListNode* curr = prev->next;
    while(curr){
        prev->next = curr->next;
        curr->next = head;
        head = curr;
        curr = prev->next;
    } // reversed the linked list now head is pointing to the tail. 
    int index = 0;
    while(head){
        if(index == positionFromTail){
           return head->data; 
        }
        index++;
        head = head->next;
    }
    return head->data;
}