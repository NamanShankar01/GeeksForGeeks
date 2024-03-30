class Solution {
  public:
    int findMaxForN(Node* root, int n) {
        // code here
        int ans=-1;
        while(root!=NULL){
            if(root->key<=n){
                ans=max(ans,root->key);
                root=root->right;
            }
            else{
                root=root->left;
            }
        }
        return ans;
    }
};
