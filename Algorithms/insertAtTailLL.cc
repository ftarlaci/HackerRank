/*
You are given the pointer to the head node of a linked 
list and an integer to add to the list. Create a new node 
with the given integer. Insert this node at the tail of the 
linked list and return the head node of the linked list formed 
after inserting this new node. The given head pointer may be null, 
meaning that the initial list is empty.
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
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
	SinglyLinkedListNode * newNode;
    newNode->data = data;
    newNode->next = nullptr;
    if(!head) {
        head = temp;
        return head;
    }
    SinglyLinkedListNode * temp = head;
    while(temp != nullptr){
        temp = temp->next;
    }
    temp = newNode;
    temp->next = nullptr;
    return head;
}