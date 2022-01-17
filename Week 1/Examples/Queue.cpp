#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    string word;
    int n;
    while(true){
        cin >> word;
         if(word == "push"){
            
            cin >> n;
            q.push(n);
            cout << "ok" << endl;;
        }
        if(word == "pop"){
           if(!q.empty()){
               cout << q.front() << endl;
               q.pop();
           }
           else{
               cout << "error" << endl;
           }
        }
        if(word == "front"){
            if(!q.empty()){
                cout << q.front() << endl;
            }
            else{
                cout << "error" << endl;
            }
        }
        if(word == "size"){
            cout << q.size() << endl;
        }      
        if(word == "clear"){
            while(q.empty()){
                q.pop();
            }
            cout << "ok" << endl;
        }
        if(word == "exit")break;      
    }
    cout << "bye" << endl;





    return 0;
}