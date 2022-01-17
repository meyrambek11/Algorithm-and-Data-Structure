#include <iostream>

using namespace std;

double f(double x1,double y1,double x2,double y2,double x){
    double y;
    y = ((y2-y1)*x - (y2 - y1)*x1 + (x2 - x1)*y1)/(x2 - x1);
    return y;
}

void test(){
    int cnt = 0;
    double x1,y1,x2,y2;
    cin >> x1 >> y1 >>x2 >> y2;
    double X = max(x1,x2);
    double x = min(x1,x2);
    double Y = max(y1,y2);
    double y = min(y1,y2);
    for(double i=x;i<=X;i++){
        for(double j=y;j<=Y;j++){
            if(j == f(x1,y1,x2,y2,i)){
                cnt++;
            }
        }
    }
    cout << cnt;
    //cout << f(x1,y1,x2,y2,-1); 
}

int main(){
    test();

}