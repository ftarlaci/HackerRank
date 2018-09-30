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
	SinglyLinkedListNode* temp = nullptr;
        if(head == nullptr){
            return head;
        }
        
        SinglyLinkedListNode * curr = head;
        while(curr->next != nullptr){
            cout << curr->data << endl;
            curr = curr->next;
        }        
        SinglyLinkedListNode * newNode;  
        newNode->data = data;
        newNode->next = nullptr;
        curr->next = newNode;
        cout << newNode->data << endl;    
    	return head;   // not quite working :/
}