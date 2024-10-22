/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {

          if (!root) return -1;

    
    queue<TreeNode*> q;
    q.push(root);

    
    vector<long int> levelSums;

    while (!q.empty()) {
        int size = q.size();
        long long int levelSum = 0;

        // Processing all nodes at the current level
        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front();
            q.pop();

            // Add node value to the current level sum
            levelSum += node->val;

         // Adding left and right children to the queue
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        // Storing the sum of the current level
        levelSums.push_back(levelSum);
    }

    // Sorting the level sums in descending order
    sort(levelSums.rbegin(), levelSums.rend());

    // If there are fewer than k levels, return -1
    if (k > levelSums.size()) return -1;

    // Returning  the kth largest level sum
    return levelSums[k - 1];
        
    }
};
