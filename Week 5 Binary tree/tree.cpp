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
node*find(node*root,int x){
    if(root == NULL) return NULL;
    if(root->val == x) return root;
    if(root->val < x) return find(root->right,x);
    return find(root->left,x);
}
void print(node*root){
    if(root != NULL){
        print(root->left);
        cout << root->val << " ";
        print(root->right);
    }
}
int rightmost(node*root){
    while(root->right != NULL){
        root = root->right;
    }
    return root->val;
}
node*delete_tree(node*root,int x){
    if(root == NULL) return NULL;
    if(root->val == x){
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;        
        }
        if(root->left != NULL && root->right == NULL){
            node*temp = root->left;
            delete root;
            return temp;
        }
        if(root->left == NULL && root->right != NULL){
            node*temp = root->right;
            delete root;
            return temp;
        }
        root->val = rightmost(root->left);
        root->left = delete_tree(root->left,root->val);
        return root;
    }
    if(root->val > x){
        root->left = delete_tree(root->left,x);
        return root;
    }
    if(root->val < x){
        root->right = delete_tree(root->right,x);
        return root;
    }
    return root;
}

int main(){
    node*root = NULL;
    int b;
    cin >>b;
    int a[] = {1,2,3,4,5,6,8,9};
    int length = sizeof(a)/sizeof(int);
    for(int i=0;i<length;i++){
        //cin >> a[i];
        root = add_tree(root,a[i]);
    }
    //print(root);

    /*if(find(root,b) == NULL){
        cout << "not found" << endl;
        }
    else{
         cout << "found" << endl;
    }*/
    root = delete_tree(root,b);
    print(root);

    return 0;
}