#include <iostream>

using namespace std;


bool f(int * a, int len, int x){
    int l = 0;
    int r = len - 1;
    while(l<r){
        int p = (l + r)/2;
        if(x <= a[p]){
            r = p;
        }
        else{
            l = p + 1;
        }
    }
    return a[l] == x;

}

int main(){
    int a,b;
    cin >> a >> b;
    int c[a];
    for(int i=0;i<a;i++){
        cin >> c[i];
    }
    int x;
    for(int i=0;i<b;i++){
        cin >> x;
        if(f(c,a,x) == true){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}