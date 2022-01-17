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
int summ(node*root){
    if(root==NULL) return 0;
    return summ(root->left) + summ(root->right) + 1;
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
    int b;
    while(true){
        cin >> b;
        if(b==0){
            break;
        }
        root = add_tree(root,b);
    }
    cout << summ(root) << endl;
    return 0;
}