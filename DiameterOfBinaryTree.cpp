class Solution {
public:
    int caldia(TreeNode* root,int& dia){
        if(root==NULL) return 0;
        
        int left=caldia(root->left,dia);
        int right=caldia(root->right,dia);
        
        dia=max(dia,left+right);
        return 1+max(left,right);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int dia=0;
        caldia(root,dia);
        return dia;
    }
};