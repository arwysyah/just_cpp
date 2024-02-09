#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr){};
  ListNode(int val) : val(val), next(nullptr) {}
  ListNode(int val, ListNode *next) : val(val), next(next) {}
};

class Solution {

public:
  ListNode *swapPairs(ListNode *head) {
    ListNode *dummy = new ListNode(0);

    dummy->next = head;
    // this gonna link our dummy node to the our list

    ListNode *point = dummy;

    while (point->next != nullptr && point->next->next != nullptr) {
      // cout << point->val << endl;
      // make the reference base on the first and second reference

      ListNode *swap1 = point->next;
      ListNode *swap2 = point->next->next;

      swap1->next = swap2->next; // 1 -> 3
      swap2->next = swap1;       // 2->1

      // update point;
      // to skip next process
      point->next = swap2;
      point = swap1;

      //
      //
    }

    return dummy->next;
  };
};

void displayNode(ListNode *root, int len = 0) {
  if (!root)
    return;

  if (root->next) {
    cout << root->val << " -> ";
  } else {
    cout << root->val << endl;
  }
  displayNode(root->next, len);
}

int main() {

  vector<int> nums = {1, 2, 3, 4};
  ListNode *head = new ListNode(nums[0]);
  ListNode *current = head;
  for (int x = 1; x < nums.size(); x++) {
    current->next = new ListNode(nums[x]);
    current = current->next;
  }

  // ListNode *b = head;
  // b->next = new ListNode(2);
  // ListNode *c = b;
  // c->next = new ListNode(3);
  displayNode(head);
  Solution s;
  ListNode *root = s.swapPairs(head);
  cout << endl;
  displayNode(root);
  // cout << "List Node " << endl;

  return 0;
}
