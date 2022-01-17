#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin >> m >> n;
    if(m>=n){
        int t = m;
        while(!(t%m == 0 && t%n == 0)){
            t++;
        }
        cout << t;
    }
    else{
         int t = n;
        while(!(t%m == 0 && t%n == 0)){
            t++;
        }
        cout << t;
    }
    return 0;
}