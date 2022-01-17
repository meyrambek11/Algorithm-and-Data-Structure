#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<int> s;
    string a;
    int b;

    while(true){
        cin >> a;
        if(a == "push"){
            cin >> b;
            s.push(b);
            cout << "ok" << endl;
        }
        if(a == "pop"){
            if(s.size() != 0){
                int c = s.top();
                s.pop();
                cout << c << endl;
            }
            else{
                
                cout << "error" << endl;
            }
        }
        if(a == "size"){
            cout << s.size() << endl;
        }
        if(a == "back"){
            if(s.size() != 0){
                int c = s.top();
                cout << c << endl;
            }
            else{
                
                cout << "error" << endl;
            }
        }
        if(a == "clear"){
            while(true){
                s.pop();
                if(s.size() == 0)break;
            }
            cout << "ok" << endl;
        }
        if(a == "exit")break;
    }
    cout << "bye" << endl;
}