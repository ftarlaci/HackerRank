/* You’re given the pointer to the head node of a linked 
list and the position of a node to delete. Delete the node 
at the given position and return the head node. A position 
of 0 indicates head, a position of 1 indicates one node away 
from the head and so on. The list may become empty after you 
delete the node.
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

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    if(!head) return head;
    if(!head->next) {
        delete(head);
        return nullptr;
    }
    SinglyLinkedListNode * curr = head;
   // SinglyLinkedListNode * fastRunner = head->next;
    
    int index = 0;
    while(curr != nullptr){
        if(index == position){           
            curr->data = curr->next->data;
            SinglyLinkedListNode *toDelete = curr->next;
            curr->next = curr->next->next;
            delete(toDelete);
        }
        index++;
        curr = curr->next;
        
    }
    return head;
}
