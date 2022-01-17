#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode*next;
    ListNode(){
        val = 0;
        next = NULL;
    }  
};
struct Queue{
    ListNode*head;
    ListNode*tail;
    int cnt;
    Queue(){
        head = NULL;
        tail = NULL;
        cnt = 0;
    }
    void push(int x){
        ListNode*t = new ListNode(x);
        if(tail == NULL){
            head = tail = t;
            cnt++;
           
        }
        else{
            tail->next = t;
            tail = t;
            cnt++;
            
        }
    }
    void pop(){
        cout << head->val << endl;
        head = head->next;
    }
    void front(){
        cout << head->val << endl;
    }
    void size(){
        cout << cnt << endl;
    }
};
void test(){
    int a;
    Queue q;
    string w;
    while(true){
        if(w == "push"){
            cin >> a;
            q.push(a);
            cout << "ok" << endl;
        }
        if(w == "front"){
            q.front();
        }
        if(w == "pop"){
            q.pop();
        }
        if(w == "size"){
            q.size();
        }
        if(w == "exit")break;

    }
    cout << "bye" << endl;
}

int main(){
    test();
    return 0;
}