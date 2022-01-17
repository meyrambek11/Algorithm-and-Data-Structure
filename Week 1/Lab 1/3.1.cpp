#include <iostream>
using namespace std;


struct node{
    int val;
    node * prev;
};

class Stack{
    private:
        node * temp;
        int it;
    public:
        Stack(){
            it = 0;
        }
        void push(int n){
            node * newn = new node();
            newn->val = n;
            newn->prev = temp;
            temp = newn;
            it++;
        }
        int back(){
            return temp->val;
        }
        int pop(){
            int res = temp->val;
            temp = temp->prev;
            it--;
            return res;
        }
        int size(){
            return it;
        }
        void clear(){
            node * n = new node();
            temp = n;
            it = 0;
        }
};

int main(){
    Stack q;
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
        if(k == "back"){
          cout << q.back() << endl;
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


}