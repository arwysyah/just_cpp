#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

void printBinaryTree(TreeNode *root, int depth = 0, char prefix = '*') {
  if (root == nullptr)
    return;

  // Print right child
  printBinaryTree(root->right, depth + 1, '/');

  // Print current node
  for (int i = 0; i < depth; i++) {
    cout << "    ";
  }
  cout << prefix << root->val << endl;

  // Print left child
  printBinaryTree(root->left, depth + 1, '\\');
}

bool isSameTree(TreeNode *a, TreeNode *b) {
  if (!a && !b)
    return true;
  if (!a || !b)
    return false;
  if (a->val != b->val)
    return false;
  return isSameTree(a->left, b->left) && isSameTree(a->right, b->right);
}
int main() {

  TreeNode *root = new TreeNode(1);
  // this is an example how to create binary tree;
  root->left = new TreeNode(2);
  root->right = new TreeNode(3);
  root->left->left = new TreeNode(4);
  // printBinaryTree(root);

  // ------------------------------------->
  TreeNode *pRoot = new TreeNode(1);
  pRoot->left = new TreeNode(2);
  pRoot->right = new TreeNode(3);

  TreeNode *qRoot = new TreeNode(1);
  qRoot->left = new TreeNode(2);
  qRoot->right = new TreeNode(3);
  printBinaryTree(pRoot);
  cout << "------------------------------>" << endl;
  printBinaryTree(qRoot);

  TreeNode *rRoot = new TreeNode(1);
  rRoot->left = new TreeNode(2);
  rRoot->right = new TreeNode(3);

  TreeNode *sRoot = new TreeNode(1);
  sRoot->left = new TreeNode(2);
  sRoot->right = new TreeNode(4);
  printBinaryTree(rRoot);
  printBinaryTree(sRoot);

  bool isTreeAreSame = isSameTree(pRoot, qRoot);
  isTreeAreSame ? cout << "P AND Q  "
                       << "True" << endl
                : cout << "P AND Q"
                       << " False" << endl;

  bool isRandSAreSame = isSameTree(rRoot, sRoot);
  isRandSAreSame ? cout << "R AND S"
                        << " True" << endl
                 : cout << "R AND S"
                        << " False" << endl;

  return 0;
}
