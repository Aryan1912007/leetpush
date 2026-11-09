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
    bool isok(TreeNode* p, TreeNode* q){
             if((p==NULL&&q!=NULL)||(q==NULL&&p!=NULL))
            return false;
        else if((p==NULL&&q==NULL))
            return true;
        bool left=isok(p->left,q->left);
        bool right=isok(p->right,q->right);
        if((left&&right)&&(p->val==q->val))
            return true;
        else 
            return false;    

    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if((root==NULL||subRoot==NULL))
            return root==subRoot;

        if((root->val==subRoot->val)&&isok( root, subRoot) )     
            return true;
         

    
return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);}
};