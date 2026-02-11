/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
*/
class Solution {
public:
  typedef ListNode *ln;

  ListNode *detectCycle(ListNode *head) {
    if (!head || !head->next) {
      return nullptr;
    }
    ln s = head->next;
    ln f = head->next->next;

    while (s && f && s != f) {
      s = s->next;
      f = f->next;
      f = f ? f->next : nullptr;
    }

    if (!s || !f) {
      return nullptr;
    }

    s = head;

    while (s != f) {
      s = s->next;
      f = f->next;
    }

    return s;
  }
};