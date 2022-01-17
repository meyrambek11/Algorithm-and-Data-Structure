#include <iostream>
using namespace std;

bool f(long int x){
    bool res = true;
    for(long int i=2;i*i<= x;i++){
        if(x%i == 0){
            res = false;
            break;
        }
    }
    return res;   
}

int main(){
    long int a;
    cin >> a;
    for(long int i=2;i<=a;i++){
        if(a%i == 0){
            if(f(i) == true){
                cout << i << " ";
            }
        }
    }
}