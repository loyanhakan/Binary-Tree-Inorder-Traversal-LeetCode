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

 //sol olmayana kadar sola git-sol olma�nca yaz bir geri gel bir kez sa�a gidip tekrar ba�lat.
 #include <vector>
 #include <stack>
 using namespace std;

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> cevap;
        stack<TreeNode*> s; // stack i�erisine curr->val girmedi�imiz i�in stack<int> de�il <TreeNode*> ��nk� art�k farkl� bir yap�da de�er �eviriyor.
        TreeNode* curr = root;
        while (curr != nullptr || s.empty() != 1)
        {
            while(curr != nullptr)
            {
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            cevap.push_back(curr->val);
            curr = curr->right;
        }
        return cevap;
    }
};
