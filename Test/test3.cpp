#include <iostream>
using namespace std;

bool f(int a, int b){
    if(a>b) return true;
    return false;
}

int main(){
    int a,cnt = 0;
    cin >> a;
    int c[a];
    for(int i=0;i<a;i++){
        cin >> c[i];
    }
    int i=0;
    while((i+1) != a){
        if(f(c[i],c[i+1]) == true){
            cnt++;
        }
        i++;
    }
    cout << a - cnt;
}