#include <iostream>

using namespace std;

struct node{
    int val;
    node*left;
    node*right;
    node(int x){
        val= x;
        left = NULL;
        right = NULL;
    }
};
node*add_tree(node*root,int x){
    if(root == NULL) return new node(x);
    if(root->val < x){
        root->right = add_tree(root->right,x);
    }
    else if(root->val > x){
        root->left = add_tree(root->left,x);
    }
    return root;
}
node *lca(node* root, int n1, int n2) 
{ 
    if (root == NULL) return NULL; 
    if (root->val > n1 && root->val > n2) 
        return lca(root->left, n1, n2);  
    if (root->val < n1 && root->val < n2) 
        return lca(root->right, n1, n2); 
  
    return root; 
}
void print(node*root){
    if(root != NULL){
        print(root->left);
        cout << root->val << " ";
        print(root->right);
    }
}


int main(){
    node*root = NULL;
    int b,c,m,n;
    cin >> b;
    for(int i=0;i<b;i++){
        cin >> c;
        root = add_tree(root,c);
    }
    cin >> n >> m;
    root = lca(root,n,m);
    cout << root->val << endl;
    return 0;
}