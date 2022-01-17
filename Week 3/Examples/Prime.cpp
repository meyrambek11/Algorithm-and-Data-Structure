#include <iostream>
using namespace std;

bool f1(int x){
    bool res = true;
    if(x == 1) return false;
    for(int i=2;i<x;i++){
        if(x%i == 0){
            res = false;
            break;
        }
    }
    return res;
}
bool f2(int x){
    bool res = true;
    if(x == 1) return false;
    for(int i=2;i*i<=x;i++){
        if(x%i == 0){
            res = false;
            break;
        }
    }
    return res;
}
void test1(){
    int a[] = {1,2,3,4,5};
    bool b[] = {0,1,1,0,1};
    int len = sizeof(a)/sizeof(int);
    for(int i=0;i<len;i++){
        if(f1(a[i]) == b[i]){
            cout << "test " << i+1 << " Passed" << endl;
        }
        else{
            cout << "test " << i+1 << " Failed" << endl;
        }
    }
}
void test2(){
     int a[] = {1,2,3,4,5};
    bool b[] = {0,1,1,0,1};
    int len = sizeof(a)/sizeof(int);
    for(int i=0;i<len;i++){
        if(f2(a[i]) == b[i]){
            cout << "test " << i+1 << " Passed" << endl;
        }
        else{
            cout << "test " << i+1 << " Failed" << endl;
        }
    }

}
int main(){
    test1();
    return 0;
}