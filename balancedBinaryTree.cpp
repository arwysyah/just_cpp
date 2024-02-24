
#include <iostream>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;

  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
  TreeNode(int val, TreeNode *left, TreeNode *right)
      : val(val), left(left), right(right) {}
};
class Solution {
public:
  bool isBalanced(TreeNode *node) { return false; }
};

void dispayNode(TreeNode *node, int depth = 0, string symbol = "*") {
  if (!node)
    return;

  dispayNode(node->right, depth + 1, "/");
  for (int t = 0; t < depth; t++) {
    cout << "  ";
  }
  cout << symbol << node->val << endl;
  dispayNode(node->left, depth + 1, "\\");
}

int main() {
  TreeNode *root = new TreeNode(3);
  TreeNode *rootLeft = new TreeNode(9);
  TreeNode *a = new TreeNode(20);
  TreeNode *b = new TreeNode(15);
  TreeNode *c = new TreeNode(7);
  root->left = rootLeft;
  root->right = a;
  a->left = b;
  a->right = c;
  dispayNode(root);
  return 0;
}
