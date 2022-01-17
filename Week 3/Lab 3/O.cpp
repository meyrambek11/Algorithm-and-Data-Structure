#include <iostream>
using namespace std;

int f(int a,int b, int res){
    res++;
    if(a - b == 0) return res;
    int t = a - b;
    if(t>=b){
        f(t,b,res);
    }
    else{
        f(b,t,res);

    }
}

int main(){
    int a,b;
    cin >> a >> b;
    if(a%b == 0){
        cout << a/b;
        return 0;
    }
    cout << f(a,b,0) << endl;

    return 0;
}