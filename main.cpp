#include <iostream>
#include "LinkedList.h"


using namespace std;

int main()
{
    Linkedlist list;
     
    // Inserting nodes
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    list.push_front(4);
  
    cout << "Elements of the list are: ";
  
    // Print the list
    list.printList();
    cout << endl;
  
    cout << "Elements of the list are: ";
    list.insert_position(8, 7);
    list.printList();
    cout << endl;
    
    int a;
    int b;
    
    a = list.find(3);
    b= list.find(9);
    
    cout << "Lastly, Elements of the list are: ";
    list.printList();
    cout << endl;
    
    cout << "a is: " << a << endl;
    cout << "b is: " << b << endl;
  
  
    /*
    // Delete node at position 2.
    list.deleteNode(2);
    
    list.back();
    
    cout << "Elements of the list are: ";
    list.printList();
    cout << endl;
    
    cout << "Elements of the list are: ";
    list.pop_front();
    list.printList();
    cout << endl;
    
    cout << "Elements of the list are: ";
    list.pop_back();
    list.printList();
    cout << endl;
    

    cout << "Elements of the list are: ";
    list.pop_back();
    list.printList();
    cout << endl;
    
    cout << "Elements of the list are: ";
    list.push_back(3);
    list.printList();
    cout << endl;
    

    
    list.pop_back();
    cout << "Elements of the list are: ";
    list.printList();
    cout << endl;
    
    list.back();
    
    
    list.pop_back();
    cout << "Elements of the list are: ";
    list.printList();
    cout << endl;
    
    list.empty();
    
    list.back();
    */
    
    return 0;
}
