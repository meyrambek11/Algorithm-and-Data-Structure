#include <iostream>
using namespace std;

struct node{
    int val;
    node*prev;
    node * temp;
    int it;
    node(){
        it = 0;
    }

    void push(int x){
        node*newn = new node();
        newn->val = x;
        newn->prev = temp;
        temp = newn;
        it++;
    }
    int pop(){
        int res = temp->val;
        temp = temp->prev;
        it--;
        return res;
    }
    int back(){
        return temp->val;
    }
    int size(){
        return it;
    }
    void clear(){
        node*n = new node();
        temp = n;
        it = 0;
    }

};

int main(){
    node q;
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
            if(q.size() == 0){
                cout << "error" << endl;
            }
            else{
                cout << q.pop() << endl;
            }
            
        }
        if(k == "back"){
          if(q.size() == 0){
              cout << "error" << endl;
          }
          else{
              cout << q.back() << endl;
          }
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