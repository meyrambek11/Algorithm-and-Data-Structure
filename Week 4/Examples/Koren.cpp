#include <iostream>
#include <iomanip>
using namespace std;
double yroot(double x, int k){
    double l = 0;
    double r = x;
    double eps = 0.0000001;
    while ( r - l > eps){
        double m = ( l + r ) / 2 ;
        int cnt=0;
        double power =1.0000000;
        while(cnt!=k){
            power = power*m;
            cnt++;
        }
        if (power >= x ){
            r = m;
        }
        else{
            l = m;
        }
    }
    return l;
}
int main(){
    double x;
    int k;
    cin >> x >> k;
    cout << fixed << setprecision(7) << yroot(x,k) << endl;
    return 0;
}