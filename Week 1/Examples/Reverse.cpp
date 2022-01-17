#include <iostream>

using namespace std;

struct node{
    int value;
    node * prev;
    node *next;
    node(int x){
        value = x;
        next = NULL;
        prev = NULL;
    }
};
struct double_linked_list{
    node * head;
    node * tail;
    double_linked_list(){
        head = NULL;
        tail = NULL;
    }
    void push_back(int x){
        node * n = new node(x);
        if(tail == NULL){
            head = tail = n;
        }
        else{
            tail->next = n;
            n->prev = tail;
            tail = n;
        }
    }
    void print_reverse(){
        node * temp = tail;
        while(temp != NULL){
            cout << temp->value << " ";
            temp = temp->prev;
        }
        cout << endl;

    }
};

int main(){
    double_linked_list ll;
    int c;
    for(int i=0;i<5;i++){
        cin >> c;
        ll.push_back(c);
    }
    

     return 0;
}