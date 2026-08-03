/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* head, int key) {
        // Code here
        // Node* temp = head;
        // while(temp!= nullptr){
        //     if(temp->data == key){
        //         return true; }
        //         temp = temp->next;
            
        // }
        //     return false;
        
        while(head != nullptr){
            if(head->data == key){
                return true;
            }
            head= head->next;
        }
        return false;
        
    }
};
