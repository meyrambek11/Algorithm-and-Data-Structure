#include <iostream>

using namespace std;
int f(int * a, int len, int x){
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
    if(l == r && a[l] == x){
        return l + 1;
    }
    return 0;
}
int f2(int * a, int len, int x){
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
    if(l == r && a[l+1] == x ){
        return l + 2;
    }
    else if(l == r && a[l+1] != x ){
        return l + 1;
    }
    return;
    
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
        cout << f(c,a,x) << " " << f2(c,a,x) << endl;
    }
}
