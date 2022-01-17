#include <iostream>
using namespace std;
int f(int a, int b){
    if(a>=b){
        if( a % b == 0) return b;
        f(b, a % b);
    }
    else{
        if( b % a == 0) return a;
        f(a, b % a);
    }
}
void test(){
    int a,b;
    cin >> a >> b;
    cout << f(a,b);
}
int main(){
    test();
    return 0;
}