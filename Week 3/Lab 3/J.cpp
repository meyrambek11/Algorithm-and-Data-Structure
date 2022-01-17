#include <iostream>
using namespace std;

int f(char a){
    return int(a) - 48;
}

int main(){
    string a;
    int cnt = 0;
    cin >> a;
    for(int i=0;i<a.length();i++){
        cnt = cnt + f(a[i]);
    }
    if(cnt % 3 == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
}