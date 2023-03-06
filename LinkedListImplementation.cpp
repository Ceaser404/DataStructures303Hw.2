#include <iostream>
#include "LinkedList.h"

using namespace std;

// delete the specified node
bool Linkedlist::deleteNode(int nodeOffset)
{
    Node *temp1 = head, *temp2 = tail;
    int ListLen = 0;
    
    //check if list is empty
    if (head == NULL) {
        cout << "List empty." << endl;
        return false;
    }
    
    while (temp1 != NULL) {
        temp1 = temp1->next;
        ListLen++;
    }
    
    // return false if node is not in list
    if (ListLen < nodeOffset) {
        cout << "Index out of range" << endl;
        return false;
    }
    
    temp1 = head;
    
    // take care of case where node is at position 1
    if (nodeOffset == 1) {
        
        head = head->next;
        delete temp1;
        return true;
    }
    
    // find the node to remove using while loop transversing the list with pointers
    while (nodeOffset-- > 1) {
        
        temp2 = temp1;
        
        temp1 = temp1->next;
    }
    
    // set previous node's next to current node's next
    temp2->next = temp1->next;
    
    // remove current node
    delete temp1;
    
    return true;
}

// function to pop the front of the list
void Linkedlist::pop_front()
{
    Node *temp1 = head;
 
    
    // if the head is empty, notify the user
    if (head == NULL) {
        cout << "List empty." << endl;
    }
    
    // set the head to the next node
    head = head->next;
    
    // delete the previous head node
    delete temp1;

}

// function to pop the back of the list, involves transversing the list
void Linkedlist::pop_back()
{
    Node *temp1 = head, *temp2 = tail;
    int ListLen = 0;
    
    // Check if the list is empty
    if (head == NULL) {
        cout << "List empty." << endl;
    }    

    // transverse the list until the end
    while (temp1->next != NULL) {
        temp2 = temp1;
        temp1 = temp1->next;
        ListLen++;
    }
    
    // the if statement pops the back for when only one node is in the list
    if (temp2 == NULL) {
        head = head->next;
        delete temp1;
    // other wise the previous node must now point to null and delete current
    // node
    } else {
        temp2->next = NULL;
        delete temp1;        
    }
    
}

// pushes node onto the back of the list
void Linkedlist::push_back(int data)   
{
    Node* newNode = new Node(data);
    
    // if list is empty make new node the head
    if (head == NULL) {
        head = newNode;
        return;
    }
    
    Node* temp = head;
    
    // transverse the list until the end
    while (temp->next != NULL) {
  
        // Update temp to iterate through list
        temp = temp->next;
    }
  
    // Insert after last node in the list
    temp->next = newNode;
}

// push a node to the front of the list
void Linkedlist::push_front(int data)
{
    // create a new node
    Node* newNode = new Node(data);
    
    // the new node needs to point to the current head as the next node
    newNode->next = head;
    // the new node should be the new head
    head = newNode;
}


void Linkedlist::printList()
{
    Node* temp = head;
    
    // Check for empty list.
    if (head == NULL) {
        cout << "List empty" << endl;
        return;
    }
    
    // Traverse the list.
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void Linkedlist::insert_position(int pos, int value)
{
    Node *pre = new Node;
    Node *cur = new Node;
    Node *temp = new Node;
    cur=head;
    int i = 0;
    for(int i=1;i<pos && cur != NULL;i++)
    {
      pre=cur;
      cur=cur->next;
    }

    temp->data=value;
    pre->next=temp;	
    temp->next=cur;        
}

bool Linkedlist::empty()
{
    if (head == NULL) {
        cout << "This List is empty." << endl;
        return false;
    } else {
        cout <<"This List is not empty." << endl;
        return true;
    }
}


// Now cout the front of the list
void Linkedlist::front() {
    
    // Check if the list is empty
    if (head == NULL) {
        cout << "List empty, therefore it has no front node" << endl;
        return;
    }  
    // if list not empty cout the value at the front of the list
    cout << "The front of the Linked list is: " << head->data << endl;
}

// Now check the back of the list
void Linkedlist::back() {
    
    // use head and tail to transverse the list
    Node *temp1 = head, *temp2 = tail;
    
    // First check if list is empty
    if (head == NULL) {
        cout << "List empty, therefore it has no back node" << endl;
        return;
    }

    // transverse until next node is empty using temp1
    while (temp1->next != NULL) {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    
    cout << "The back of the Linked list is: " << temp1->data << endl;
}





int Linkedlist::find(int value)
{
    // initialize pointer variable and listlength
    Node *temp1 = head, *temp2 = tail;
    int ListLen = 0;

    // iterate throught the entire list or until value is found
    while (temp1 != NULL) {
        
        // Check if temp1 is equal to the value
        if (temp1->data == value) {
            ListLen++;
            cout << "Found and returned position of value: " << ListLen << endl;
            return ListLen;
        }
        temp1 = temp1->next;
        ListLen++;
    }
    // if temp1 was never equal, return the length of the list
    cout << "Did not find value in list, returned list length: " << ListLen <<endl;
    return ListLen;
    
     
}










