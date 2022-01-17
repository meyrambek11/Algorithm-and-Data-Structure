#include <iostream>
#define MAXN 10000
using namespace std;

struct heap{
    int hs; 
    int val[MAXN]; 
    heap(){
        hs = 0;
    }

    void add_heap(int x) {
        int y, pos=hs, npos; 
        val[hs++] = x; 
        npos=(pos-1)/2; 
        while (pos && val[pos] < val[npos]){ 
            y=val[pos]; 
            val[pos]=val[npos]; 
            val[npos] = y; 
            pos=npos; 
            npos=(pos-1)/2; 
        } 
    } 
    void print(){
        for(int i=0;i<hs;i++){
            cout << val[i] << " ";
        }
    }
};

int main(){
    heap h;
    int a[] = {8,4,7,6,3,1,5};
    int l = sizeof(a)/sizeof(int);
    for(int i=0;i<l;i++){
        h.add_heap(a[i]);
    }
    h.print();
   
}