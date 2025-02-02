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

    TreeNode* findMin(TreeNode* node){
        while(node->left){
            node=node->left;
        }
        return node;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return NULL;

        else if(key<root->val){
            root->left=deleteNode(root->left,key);
        }
        else if(key>root->val){
            root->right=deleteNode(root->right,key);
        }
        else{
            if(!root->right && !root->left){
                delete root;
                return NULL;
            }
            if(!root->left){
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }
            else if(!root->right){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }

            TreeNode* minNode=findMin(root->right);
            root->val=minNode->val;
            root->right=deleteNode(root->right,minNode->val);

        }
        return root;
    }
};