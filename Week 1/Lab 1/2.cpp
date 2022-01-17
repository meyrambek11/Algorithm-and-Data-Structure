#include <iostream>
#include <vector>

using namespace std;

struct queue{
    vector<int> v;
    int first;
    queue(){
        first = 0;
    }
    void push(int x){
        v.push_back(x);
    }
    int pop(){
        int res = v[first];
        first++;
        return res;
    }
    int front(){
        return v[first];
    }
    int size(){
        return v.size() - first;
    }
    void clear(){
        v.clear();
        first = 0;
    }
};

int main(){
    queue q;
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
        if(k == "front"){
           if(q.size() == 0){
                cout << "error" << endl;
            }
            else{
                cout << q.front() << endl;
                
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