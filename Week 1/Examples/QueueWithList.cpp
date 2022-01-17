#include <iostream>
#include <vector>
using namespace std;

struct node{
    vector<int> a;
    int first;
    node(){
        first = 0;
    }
    void push_back(int x){
        a.push_back(x);
    }
    int print(){
        int res = a[first];
        first++;
        return res;
    }
    
};
int main(){
    node n;
    int a;
   for(int i=0;i<3;i++){
       cin >> a;
       n.push_back(a);
   }
for(int i=0;i<3;i++){
    cout << n.print() << endl;
}

}