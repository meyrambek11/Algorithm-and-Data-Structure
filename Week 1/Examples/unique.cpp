#include <iostream>

using namespace std;

struct node{
    int val;
    node*next;
    node(int x){
        val = x;
        next = NULL;
    }
};
struct list{
    list*head;
    list*tail;
    list(){
        head = NULL;
        tail = NULL;
    }
    void push(int y){
        if(tail == NULL){
            tail = new node(y);
            head = tail;
        }
        else{
            if(y != tail->val){
                node * n = new node(y);
                tail->next = n;
                tail = n;
            }
            
        }

    }
     void print(){
        node * temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

};

int main(){
    list q;
    int c;
    for(int i=0;i<5;i++){
        cin >> c;
        q.push(c);
        
    }
    q.print();
}