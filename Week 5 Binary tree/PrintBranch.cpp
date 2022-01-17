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
void print(node*root){
    if(root != NULL){
        print(root->left);
        if(root->left != NULL && root->right == NULL){
            cout << root->val <<endl;
        }
        if(root->left == NULL && root->right != NULL){
            cout << root->val <<endl;
        }
        print(root->right);
    }
}


int main(){
    node*root = NULL;
    int b;
    while(true){
        cin >> b;
        if(b==0){
            break;
        }
        root = add_tree(root,b);
    }
    print(root);
    return 0;
}