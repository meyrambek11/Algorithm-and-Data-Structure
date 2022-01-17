#include <iostream>
#include <vector>

using namespace std;

struct stack{
    vector<int> v;
    int last;
    int siz;
    stack(){
        last = 0;
        siz = 0;
    }
    void push(int x){
        v.push_back(x);
        last++;
    }
    int pop(){
        int res = v[last-1];
        siz++;
        last--;
        return res;
    }
    int top(){
        return v[last-1];
    }
    int size(){
        return v.size() - siz;
    }
    void clear(){
        v.clear();
        last = 0;
        siz = 0;
    }
};

int main(){
    stack q;
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
                cout << q.top() << endl;
                
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
