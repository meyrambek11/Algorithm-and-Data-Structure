#include <iostream>
using namespace std;

bool f(int x,int m){
    bool res = false;
    if(x == m){
        res = true;
    }
    return res;
}
void test(){
    int a,m;
    cin >> a;
    int b[a];
    int cnt = 0;
    for(int i=0;i<a;i++){
        cin >> b[i];
    }
    cin >> m;
    for(int i=0;i<a;i++){
        if(f(b[i],m) == 1){
            cnt++;
        }        
    }
    cout << cnt;
}

int main(){
    test();
    return 0;
}