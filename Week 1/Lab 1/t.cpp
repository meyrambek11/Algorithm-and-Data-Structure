#include <iostream>
using namespace std;

struct ListNode{
    int val;
    ListNode*next;
    ListNode(int x){
        val = x;
        next = NULL;
    }
};
struct List{
    ListNode*head;
    ListNode*tail;
    int cnt;
    List(){
        head = NULL;
        tail = NULL;
        cnt = 0;
    }
    void push(int x){
        ListNode*t = new ListNode(x);
        cnt++;
        if(tail == NULL){
            head = tail = t;
        }
        else{
            tail->next = t;
            tail = t;
        }
    }
    int front(){
        return head->val;
    }
    int pop(){
        int res = head->val;
        cnt--;
        head = head->next;
        return res;
    }
    int size(){
        return cnt;
    }
    void clear(){
        cnt = 0;
        head = NULL;
        tail = NULL;
    }
        
};

int main(){
    List q;
    string k;
    int s;
    while(true){
        cin >> k;
        if(k == "push"){
            cin >> s;
            q.push(s);
            cout << "ok" << endl;
        }
        if(k == "pop"){
            cout << q.pop() << endl;
            
        }
        if(k == "front"){
            cout << q.front() << endl;
        }
        if(k == "size"){
            cout << q.size() << endl;
        }
        if(k == "clear"){
            q.clear();        
            cout << "ok" << endl;
        }
        if(k == "exit")break;
    }
    cout << "bye" << endl;
    
    return 0;
}