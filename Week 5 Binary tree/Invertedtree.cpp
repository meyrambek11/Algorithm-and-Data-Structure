#include <iostream>
using namespace std;

struct node{
    node*right;
    node*left;
    int val;
    node(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};
node* add(node*root, int x){
    if(root == NULL){
        return new node(x);
    }
    if(root->val > x){
        root->left = add(root->left,x);
    }
    if(root->val < x){
        root->right = add(root->right,x);
    }
    return root; 
}
void print(node*root){
    if(root != NULL){
        print(root->left);
        cout << root->val << endl;
        print(root->right);
    }
}
node*invert(node*root){
    if(root == NULL) return NULL;
    node*temp = root->left;
    root->left = invert(root->right);
    root->right = invert(temp);
    return root;
}

int main(){
    int x,y;
    cin >> x;
    node*root = NULL;
    for(int i=0;i<x;i++){
        cin >> y;
        root = add(root,y);
    }
    root = invert(root);
    print(root);
    return 0;
}