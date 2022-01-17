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
    a[l] = -1;
    return l + 1;
    return 0;

}

int main(){
    int a[] = {1,1,3,3,5,7,9,18,18,57};
    int len = sizeof(a)/sizeof(int);
    int blen = sizeof(b)/sizeof(int);
    int b[] = {57,3,9,1,179};
    for(int i=0;i<blen;i++){
        cout << f()

    }

}