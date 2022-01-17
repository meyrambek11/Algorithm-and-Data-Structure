#include <iostream>
using namespace std;

bool f(long long int x){
    bool res = true;
    if(x == 1) return false;
    for(long long int i = 2;i*i <= x;i++){
        if(x % i == 0){
           res = false;
           break;
        }
    }
    return res;
}
void test(){
    long long int a;
    cin >> a;
    for(long long int i=1;i<=a;i++){
        if(a%i == 0){
            if(f(i) == 1){
                cout << i << " ";
            }
            else{
                cout << 0;
            }
        }
    }
}

int main(){
    test();
    return 0;
}
//2147483647