/*
// Representation of a node
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        // code here
        if (arr.empty()){
            return nullptr;
        }
        Node* head = new Node(arr[0]);
        Node* tail = head;
        
        for(int i=1; i<arr.size(); i++){
            Node* newNode = new Node(arr[i]);
            tail->next= newNode;
            tail= newNode;
        }
        return head;
        
    }
};