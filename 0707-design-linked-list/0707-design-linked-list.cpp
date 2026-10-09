class MyLinkedList {
public:

    struct Node{
        int val ;
        Node* next ;
        Node(int val){
            this->val = val;
            this->next = nullptr; 
        }
    };
    Node* head;
    int size;

    MyLinkedList() {
        head = nullptr;
        size = 0;
    }
    
    int get(int index) {
        if(index<0 || index>=size){
            return -1;
        }
        Node* temp = head;
        for(int i=0;i<index;i++){
            if(temp==nullptr){
                return -1;
            }
            temp = temp->next;
        }
         if(temp==nullptr){
                return -1;
            }
        return temp->val;
    }
    
    void addAtHead(int val) {
         Node* newNode = new Node(val);
         newNode->next = head;
         head = newNode;
         size++;
    }
    
    void addAtTail(int val) {
       Node* newNode = new Node(val);
       if(head==nullptr){
        head = newNode;
        size++;
        return;
       }
       Node* temp = head;
       while(temp->next!=nullptr){
        temp = temp->next;
       }
       temp->next = newNode;
       size++;
    }
    
    void addAtIndex(int index, int val) {
        Node* newNode = new Node(val);
        if(index<0 || index>size){
            return;
        }
        if(index==0){
            return addAtHead(val);
        }
        Node* curr = head;
        for(int i=0;i<index-1;i++){
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
        size++; 

    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>=size){
            return;
        }
        if(index == 0){
            Node* temp = head;
            head = head->next;
            delete temp;
            size--;
            return;
        }
        Node* curr = head;
        for(int i=0;i<index-1;i++){
            curr = curr->next;
        }
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
        size--;

    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */