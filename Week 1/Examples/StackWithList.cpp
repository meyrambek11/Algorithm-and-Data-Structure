#include <iostream>
#include <vector>
using namespace std;

struct node{
    vector<int> v;
    int last;
    node(){
        last = 0;
    }
    void push(int x){
        v.push_back(x);
        last++;
    }
    int print(){
        int res = v[last];
        last--;
        return res;
    }

};
int main(){
    node n;
    int c;
    for(int i=0;i<3;i++){
        cin >> c;
        n.push(c);
        cout << n.print() << endl;
    }
    


}