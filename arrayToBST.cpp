// 108. Convert Sorted Array to Binary Search Tree
// Solved
// Easy
// Topics
// Companies
//
// Given an integer array nums where the elements are sorted in ascending order,
// convert it to a height-balanced binary search tree.
//
//
//
// Example 1:
//
// Input: nums = [-10,-3,0,5,9]
// Output: [0,-3,9,-10,null,5]
// Explanation: [0,-10,5,null,-3,null,9] is also accepted:
//
// Example 2:
//
// Input: nums = [1,3]
// Output: [3,1]
// Explanation: [1,null,3] and [3,1] are both height-balanced BSTs.
//
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
      : val(val), left(left), right(right) {}
};

TreeNode *binarySearchTree(int start, int end, vector<int> &arrs) {
  if (start > end)
    return nullptr;
  int mid = (start + end) / 2;
  cout << arrs[mid] << endl;
  TreeNode *newBst = new TreeNode(arrs[mid]);
  newBst->left = binarySearchTree(start, mid - 1, arrs);
  newBst->right = binarySearchTree(mid + 1, end, arrs);
  return newBst;
}

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

class Solution {

public:
  TreeNode *sortedArrayToBST(vector<int> &nums) {
    return binarySearchTree(0, nums.size() - 1, nums);
  };
};

int main() {
  vector<int> numbers = {-10, -3, 0, 5, 9};
  Solution solutions = Solution();
  TreeNode *root = solutions.sortedArrayToBST(numbers);
  printBinaryTree(root);
  cout << "Convert Array to Binary Search Tree" << endl;
}
