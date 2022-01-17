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
int iden(node*root1,node*root2){
    if(root1 == NULL && root2 == NULL)return 1;
    if (root1 != NULL && root2 != NULL)  
    {  
        return
        (  
            root1->val == root2->val &&  
            iden(root1->left, root2->left) &&  
            iden(root1->right, root2->right)  
        );  
    } 
    return 0; 
}
void print(node*root){
    if(root != NULL){
        print(root->left);
        cout << root->val << " ";
        print(root->right);
    }
}


int main(){
    node*root1 = NULL;
    node*root2 = NULL;
    int b1,b2,c1,c2;
    cin >> b1;
    for(int i=0;i<b1;i++){
        cin >> c1;
        root1 = add_tree(root1,c1);
    }
    cin >> b2;
    for(int i=0;i<b2;i++){
        cin >> c2;
        root2 = add_tree(root2,c2);
    }
    if(iden(root1,root2) == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}