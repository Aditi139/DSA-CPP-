/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
public:
  // Should return head of the modified linked list
  Node *sortedInsert(Node *head, int key) {
    if (key <= head->data) {
      Node *nd = new Node(key);
      nd->next = head;

      return nd;
    }

    for (Node *cur = head; cur != nullptr; cur = cur->next) {
      if (!cur->next || cur->next->data >= key) {
        Node *nd = new Node(key);
        Node *nxt = cur->next;
        cur->next = nd;
        nd->next = nxt;
        break;
      }
    }

    return head;
  }
};