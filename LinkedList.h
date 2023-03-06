
class Node {
    public:
        int data;
        Node* next;
        
        
        Node()
        {
            data = 0;
            next = NULL;
        }
        
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
};

class Linkedlist {
    Node* head;
    Node* tail;
    
    public:
        
        Linkedlist() { head, tail = NULL; }
        
        void push_back(int);
        
        void push_front(int);
        
        void printList();
        
        bool deleteNode(int);
        
        void pop_front();
        
        void pop_back();
        
        void insert_position(int, int);
        
        bool empty();
        
        void front();
        
        void back();
        
        int find(int);
};

