#include <iostream>
#define MAXN 1000

using namespace std;

struct heap{
    private:
        int a[MAXN];
        int len;
    public:
        heap(){
            len = 0;
        }
        void add(int val){
            int x = len;
            a[len++] = val;
            sift_up(x);
        }
        int cut_max(){
            int res = a[0];
            a[0] = a[--len];
            sift_down(0);
            return res;
        }
        void sift_down(int p){
            int l = (2*p) + 1;
            while(l < len){
                int minp = l;
                if(a[l] < a[l+1]){
                    minp = l+1;
                }
                if(a[p] < a[minp]){
                    swap(a[p], a[minp]);
                }
                else{
                    break;
                }
                p = minp;
                l = (2*p) + 1;
            }
        }
        sift_up(int x){
            int p = (x-1)/2;
            while(x > 0 && a[p] <= a[x]){
                swap(a[p],a[x]);
                x = p;
                p = (x-1)/2;
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
    int a[] = {4,5,3,9,8,7,10};
    int l = sizeof(a)/sizeof(int);
    for(int i=0;i<l;i++){
        h.add(a[i]);

    }
    h.print();
    cout << endl;
    cout <<h.cut_max() << endl;
    h.print();
    cout << endl;
    cout <<h.cut_max() << endl;
    h.print();
    cout << endl;
    cout <<h.cut_max() << endl;
    h.print();
    return 0;
}