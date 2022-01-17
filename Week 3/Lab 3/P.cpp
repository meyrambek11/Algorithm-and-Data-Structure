#include <iostream>
#include <sstream>
using namespace std;

string getString(double y){
    stringstream ss;
    ss << y;
    return ss.str();
}
int f(int a, int b){
    if(a>= b){
        if(a%b == 0) return b;
        f(b,a%b);
    }
    else{
        if(b%a == 0) return a;
        f(a,b%a);
    }
}
int main(){
    int cnt = 0;
    double a,b,c;
    cin >> a >> b >> c;
    double x = f(a,b);
    double y = (c - a*x)/b;
    cout << y%2 << " ";
    string res = getString(y);
    for(int i=0;i<res.length();i++){
        if(res[i] == '.'){
            cnt++;
        }
    }
    if(cnt == 1){
        cout << "Impossible";
    }
    else{
        cout << x << " " << x << " " << res;
    }

}