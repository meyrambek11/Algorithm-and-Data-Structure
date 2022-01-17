#include <iostream>
#include <algorithm>

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
int  hh(node*root,int h){
    if(root == NULL) return h;
    return max(hh(root->left,h+1),hh(root->right,h+1));
}
bool balanced(node*root){
    bool res = true;
    while(root != NULL){
        int c1 = max(hh(root->left,0),hh(root->right,0));
        int c2 = min(hh(root->left,0),hh(root->right,0));
        if(c1 - c2 <= 1){
            res = true;  
        }
        else{
            res = false;
            break;
        } 
        root = root->left;
        root = root->right;  
    }
    return res;
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
    //print(root);
    if(balanced(root) == 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
/*bool isBalanced(node* root) 
{ 
    int lh; 
    int rh; 
  
    
    if (root == NULL) 
        return 1; 
  
    
    lh = height(root->left); 
    rh = height(root->right); 
  
    if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right)) 
        return 1; 
  
   
    return 0; 
}*/