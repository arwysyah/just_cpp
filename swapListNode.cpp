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

//
// class Solution  {
// ListNode *swapPairs (ListNode *head){
//
//   };
// };
//
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
  // cout << "List Node " << endl;

  return 0;
}
