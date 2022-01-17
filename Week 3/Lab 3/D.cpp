#include <iostream>
#include <cmath>

using namespace std;

int f(int x){
    return sqrt(x);
}

int main(){
    int c;
    cin >> c;
    int t;
    while(c >= 1){
        t = f(c);
        cout << t << " ";
        c = c - t*t;
    }
    return 0;
}