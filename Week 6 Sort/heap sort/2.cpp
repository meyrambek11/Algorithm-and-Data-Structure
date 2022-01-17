#include <iostream>
#include <vector>
#define MAXN 10000
using namespace std;

struct heap{
    vector<int> v;
    int a[MAXN];
    int len;
    heap(){
        len = 0;
    }
    int cut_max(){
        int res = a[0];
        a[0] = a[len--];
        sift_down(0);
        return res;
    }
    void add(int val){
        int x = len;
        a[len++] = val;
        sift_up(x);
    }
    void sift_up(int x){
        int p = (x-1)/2;
        while(x > 0 && a[p] < a[x]){
            swap(a[p],a[x]);
            x = p;
            p = (x-1)/2;
        }
    }
    void sift_down(int p){
        int l = 2*p + 1;
        while(l<len){
            int maxp = l;
            if(a[l+1] > a[l]){
                maxp = l+1;
            }
            if(a[p] < a[maxp]){
                swap(a[p],a[maxp]);
            }
            else{
                break;
            }
            p = maxp;
            l = 2*p + 1;
        }
    }
    void print(){
        for(int i=0;i<len;i++){
            cout << a[i] << " ";
        }
    }

};

int main(){
    heap h;
    int n,a,b;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a;
        if(a == 0){
            cin >> b;
            h.add(b);
        }
        if(a == 1){
            cout << h.cut_max() << endl;
        }
    }
    /*int a[] = {8,4,7,6,3,1,5};
    int l = sizeof(a)/sizeof(int);
    for(int i=0;i<l;i++){
        h.add(a[i]);

    }
    h.print();
    cout << endl;
    cout << h.cut_max() << endl;
    h.print();*/
}