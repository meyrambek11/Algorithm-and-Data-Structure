#include <iostream>

using namespace std;

bool f(int x){
    bool res = true;
    if(x == 0 || x == 1) return false;
    for(int i=2;i*i<=x;i++){
        if(x%i == 0){
            res = false;
            break;
        }
    }
    return res;
}

int main(){
    int a;
    cin >> a;
    if(f(a) == 1){
        cout << "prime" << endl;
    }
    else{
        cout << "composite" << endl;
    }
    return 0;
}