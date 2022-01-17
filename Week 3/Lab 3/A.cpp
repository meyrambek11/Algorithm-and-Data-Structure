#include <iostream>
using namespace std;

int f2(int b,int d){
    int t = max(b,d);
    int k = min(b,d);
    int cnt = t;
    if(t%k == 0) return t;
    while(!(cnt%t == 0 && cnt%k == 0)){
        cnt++;
    }
    return cnt;
}
void test(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int n = f2(b,d);
    int m = ((n/b)*a) + ((n/d)*c);
    if(n>m){
        
        if(n%m == 0){
            n = n/m;
            m = 1;
        }
        else{
            int mgo = m;
            while(mgo>1){
                if(n%mgo == 0 && m%mgo == 0){
                    n = n/mgo;
                    m = m/mgo;
                    break;
                }
                mgo--;
            }
        }
        cout << m << " " << n;
    }
    else if(m > n){
        if(m%n == 0){
            m = m/n;
            n = 1;
        }
        else{
            int ngo = n;
            while(ngo>1){
                if(m%ngo == 0 && n%ngo == 0){
                    m =  m/ngo;
                    n = n/ngo;
                    break;                  
                }
                ngo--;
            }
        }
        cout << m << " " << n;
    }
    else{
        cout << 1 << " " << 1;
    }
    
    
}

int main(){
    test();

    return 0;
}