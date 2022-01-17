#include <iostream>
using namespace std;

int nearest(int *a, int i, int x){
    int i2 = i - 1;
    if(i2 < 0) return a[i];
    int d1 = a[i] - x;
    int d2 = x - a[i2];
    if(d1 >= d2) return a[i2];
    return a[i];
}

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
    return nearest(a,l,x);
}

int main(){
    int a,b;
    int c[a];
    int d[b];
    cin >> a >> b;
    for(int i=0;i<a;i++){
        cin >> c[i]; 
    }
    for(int i=0;i<b;i++){
        cin >> d[i];
        cout << f(c,a,d[i]) << endl;
    }
}