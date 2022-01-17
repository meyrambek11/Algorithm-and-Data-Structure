#include <iostream>
#include <vector>

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
void print(node*root){
    if(root != NULL){
        print(root->left);
        cout << root->val << " ";
        print(root->right);
    }
}
void calculateLevelSum(node*root, int level, int sum[]) 
{ 
    if (root == NULL) 
        return; 
    sum[level] += root->val; 
   
    calculateLevelSum(root->left, level + 1, sum); 
    calculateLevelSum(root->right, level + 1, sum); 
} 




int main(){
    node*root = NULL;
    int b,c;
    cin >> b;
    for(int i=0;i<b;i++){ 
        cin >> c;
        root = add_tree(root,c);
    }
    int k = hh(root,0);
    cout << k << endl;
    int sum[k] = {0};
    calculateLevelSum(root,0,sum);
    for(int i=0;i<k;i++){
        cout << sum[i] << " ";
    }
    
}