#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i*i <= n;i++){
        if(i * i == n){
            cout << i << endl;
            return 0;
        }
        for(int j=1;j<= n - i*i;j++){
            if(i * i + j * j == n){
                cout << i << " " << j << endl;
                return 0;
            }
            for(int k=1;k<=n - i*i - j*j; k++){
                int rem = n - i*i - j*j - k*k;
                if(rem == 0){
                    cout << i << " " << j << " " << k << endl;
                    return 0;
                }
                int p = sqrt(rem);
                if(p*p == rem && p>= 1){
                    cout << i << " " << j << " " << k << " " << p << endl;
                    return 0;
                }
            }
        }
    }
}