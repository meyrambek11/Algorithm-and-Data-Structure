#include <iostream>
using namespace std;

int f(int a, int b){
    if( a % b == 0) return b;
    return f(b, a % b);
}

int main(){
    int n,m;
    cin >> n >> m;
    if(n>m){
        cout << f(n,m) << endl;
    }
    else{
        cout << f(m,n) << endl;
    }
    return 0;
}