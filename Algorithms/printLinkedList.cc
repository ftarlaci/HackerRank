/*
Given a pointer to the head node of a linked list, print its 
elements in order, one element per line. If the head pointer 
is null (indicating the list is empty), don’t print anything.
*/

// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    if(!head) return;
    SinglyLinkedListNode * temp = head;
   	while(temp != nullptr){
   		cout << temp->data << end;
   		temp = temp->next;
   	}


}