#include <iostream>
#include <vector>
using namespace std;

// Definition of Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:
    // Recursive helper function for level order traversal
    void levelOrderRec(Node* root, int level, vector<vector<int>>& res) {
        // Base case
        if (root == NULL) return;

        // If this level is not in the result vector yet, add it
        if (res.size() <= level) {
            res.push_back({});
        }

        // Add current node data to corresponding level
        res[level].push_back(root->data);

        // Recur for left and right children
        levelOrderRec(root->left, level + 1, res);
        levelOrderRec(root->right, level + 1, res);
    }

    // Main function to return level order traversal
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        levelOrderRec(root, 0, res);
        return res;
    }
};

// Helper function to print the result
void printLevelOrder(const vector<vector<int>>& levels) {
    for (const auto& level : levels) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
}

// Main function to test
int main() {
    /*
        Sample Tree:
              1
             / \
            2   3
           / \   \
          4   5   6
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    Solution sol;
    vector<vector<int>> result = sol.levelOrder(root);

    cout << "Level Order Traversal:\n";
    printLevelOrder(result);

    return 0;
}
