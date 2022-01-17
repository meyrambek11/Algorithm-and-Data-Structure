#include <iostream>
using namespace std;

int main(){
    int a[4];
    int k;
    for(int i=0;i<4;i++){
        cin  >> k;
        a[i] = k;
    }
    for(int i=0;i<3;i++){
        a[i] = a[i+1];
        cout << a[i] << endl;
    }


}