#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    string word;
    int k;
    int cnt = 0;
    while(true){
        cin >> word;
        if(word == "push"){
            cin >> k;
            s.push(k);
            cout << "ok" << endl;
            cnt++;
        }
        if(word == "pop"){
            cout << s.top() << endl;
            s.pop();
            cnt--;
        }
        if(word == "back"){
            cout << s.top() << endl;
        }
        if(word == "size"){
            //cout << s.size() << endl;
            cout << cnt << endl;
        }
        if(word == "clear"){
            while(s.empty()){
                s.pop();
            }
            cout << "ok" << endl;
            cnt = 0;
        }
        if(word == "exit")break;
    }
    cout << "bye" << endl;
    return 0;
}