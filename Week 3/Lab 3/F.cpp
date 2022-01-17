#include <iostream>
#include <vector>

using namespace std;

int f(int x){
    int cnt = 0;
    for(int i=1;i<x;i++){
        if(x%i == 0){
            cnt = cnt + i;
        }
    } 
    return cnt;
}

void test(){
    int a;
    vector<int> v;
    cin >> a;
    for(int i=2;i<=a;i++){
        for(int j=2;j<=a;j++){
            if(v.size() == 0){
                if(f(i) == j && f(j) == i && i != j){
                    cout << i << " " << j << endl;
                    v.push_back(i); 
                }
            }
            else{
                if(f(i) == j && f(j) == i && i != j){
                    for(int k=0;k<v.size();k++){
                        if(j != v[k]){
                            cout << i << " " << j << endl;
                            v.push_back(i); 
                        }

                    }
                }
            }
        }
    }
   
}

int main(){
    test();
    
}