#include <ios>
#include <iostream>

#include <vector>

using namespace std;

struct TreeNode {

  int val;
  TreeNode *left;
  TreeNode *right;

  TreeNode() : val(0), left(nullptr), right(nullptr){};
  TreeNode(int val) : val(val), left(nullptr), right(nullptr){};
  TreeNode(int val, TreeNode *left, TreeNode *right)
      : val(val), left(left), right(right) {} /* ; */
};

bool isMirrorCheck(TreeNode *left, TreeNode *right) {

  if (left == nullptr || right == nullptr)
    return left == right;
  if (left->val != right->val)
    return false;

  return isMirrorCheck(left->left, right->right) &&
         isMirrorCheck(left->right, right->left);
}

class Solution {
public:
  bool isSymetric(TreeNode *root, int lefts = 0, int rights = 0) {

    return root == NULL || isMirrorCheck(root->left, root->right);
  }
};

void displayNode(TreeNode *node, int depth = 0, string sym = "*") {
  if (!node)
    return;
  displayNode(node->right, depth + 1, "/");
  for (int x = 0; x < depth; x++) {
    cout << "   ";
  }
  cout << sym << node->val << endl;
  displayNode(node->left, depth + 1, "\\");
};

void pushNode(TreeNode *node) {
  if (!node)
    return;
  if (node->left == nullptr)
    node->left = node;
  else
    node->right = node;
};

int main() {
  Solution solution;
  vector<int> nums = {1, 2, 2, 3, 4, 4, 2};
  TreeNode *head = new TreeNode(nums[0]);
  TreeNode *ab = new TreeNode(2);
  TreeNode *ac = new TreeNode(2);
  TreeNode *ad = new TreeNode(3);
  TreeNode *ae = new TreeNode(4);
  TreeNode *af = new TreeNode(4);
  TreeNode *ag = new TreeNode(3);
  head->left = ab;
  head->right = ac;
  ab->left = ad;
  ab->right = ae;
  ac->left = af;
  ac->right = ag;

  // int x = 1;
  // while (x < nums.size() - 1) {
  //   pushNode(new TreeNode(nums[x]));
  //   x++;
  // }

  displayNode(head);
  bool isSymetric = solution.isSymetric(head);
  cout << "result => " << isSymetric << endl;
  return 0;
}
