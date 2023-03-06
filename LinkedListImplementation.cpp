#include <iostream>
#include "LinkedList.h"

using namespace std;

bool Linkedlist::deleteNode(int nodeOffset)
{
    Node *temp1 = head, *temp2 = tail;
    int ListLen = 0;
    
    if (head == NULL) {
        cout << "List empty." << endl;
        return false;
    }
    
    while (temp1 != NULL) {
        temp1 = temp1->next;
        ListLen++;
    }
    
    if (ListLen < nodeOffset) {
        cout << "Index out of range" << endl;
        return false;
    }
    
    temp1 = head;
    
    if (nodeOffset == 1) {
        
        head = head->next;
        delete temp1;
        return true;
    }
    
    while (nodeOffset-- > 1) {
        
        temp2 = temp1;
        
        temp1 = temp1->next;
    }
    
    temp2->next = temp1->next;
    
    delete temp1;
    
    return true;
}

void Linkedlist::pop_front()
{
    Node *temp1 = head;
 
    
    if (head == NULL) {
        cout << "List empty." << endl;
    }

    head = head->next;
    
    delete temp1;

}

void Linkedlist::pop_back()
{
    Node *temp1 = head, *temp2 = tail;
    int ListLen = 0;
    
    if (head == NULL) {
        cout << "List empty." << endl;
    }    


    while (temp1->next != NULL) {
        temp2 = temp1;
        temp1 = temp1->next;
        ListLen++;
    }
    
    if (temp2 == NULL) {
        head = head->next;
        delete temp1;
    } else {
        temp2->next = NULL;
        delete temp1;        
    }
    
}


void Linkedlist::push_back(int data)   // needs to insert at a specified point or at end of list if point is larger than list
{
    Node* newNode = new Node(data);
    
    if (head == NULL) {
        head = newNode;
        return;
    }
    
    Node* temp = head;
    
    while (temp->next != NULL) {
  
        // Update temp
        temp = temp->next;
    }
  
    // Insert at the last.
    temp->next = newNode;
}

void Linkedlist::push_front(int data)
{
    Node* newNode = new Node(data);
    
    newNode->next = head;
    head = newNode;
    cout << "Node pushed at front"<<endl;
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

void Linkedlist::front() {
    if (head == NULL) {
        cout << "List empty, therefore it has no front node" << endl;
        return;
    }  
    cout << "The front of the Linked list is: " << head->data << endl;
}

void Linkedlist::back() {
    
    Node *temp1 = head, *temp2 = tail;
    
    if (head == NULL) {
        cout << "List empty, therefore it has no back node" << endl;
        return;
    }

    while (temp1->next != NULL) {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    
    cout << "The back of the Linked list is: " << temp1->data << endl;
}

int Linkedlist::find(int value)
{
    Node *temp1 = head, *temp2 = tail;
    int ListLen = 0;

    
    while (temp1 != NULL) {
        if (temp1->data == value) {
            ListLen++;
            cout << "Found and returned position of value: " << ListLen << endl;
            return ListLen;
        }
        temp1 = temp1->next;
        ListLen++;
    }
    cout << "Did not find value in list, returned list length: " << ListLen <<endl;
    return ListLen;
    
     
}










