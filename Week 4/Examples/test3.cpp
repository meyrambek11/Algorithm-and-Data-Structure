#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double f(double a){
    double l = 1.0000000;
    double r = a;
    double eps = 0.00000001;
    while(r - l > eps){
        double p = (l+r)/2;
        double k = sqrt(p);
        if((p*p + k) >= a){
            r = p;
        }
        else{
            l = p;
        }
    }
    return l;
}

int main(){
    double a;
    cin >> a;
    cout << fixed << setprecision(7) << f(a) << endl;


    return 0;
}