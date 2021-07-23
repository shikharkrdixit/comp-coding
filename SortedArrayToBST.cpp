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
    TreeNode* creator(vector<int> vec,int lo,int hi){
        if(lo>hi)return NULL;
        int mid=lo+(hi-lo)/2;
        
        TreeNode* head=new TreeNode(vec[mid]);
        head->left=creator(vec,lo,mid-1);
        head->right=creator(vec,mid+1,hi);
        return head;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0)return NULL;
        return creator(nums,0,nums.size()-1);
    }
};