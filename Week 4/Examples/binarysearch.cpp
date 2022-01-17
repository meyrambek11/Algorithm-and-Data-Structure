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

void test(){
    int a[] = {1,1,3,4,5,5,7,8,9};
    int len = sizeof(a)/sizeof(int);
    int x;
    cin >> x;
    if(f(a,len,x) == true){
        cout << "found" << endl;
    }
    else{
        cout << "not found" << endl;
    }

}

int main(){
    test();
    return 0;
}