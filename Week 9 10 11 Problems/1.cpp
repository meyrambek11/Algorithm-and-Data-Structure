#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s,k;
    vector<int> v;
    cin >> s >> k;
    int n = s.size();
    int m = k.size();
    for(int i=0;i<n;i++){
        bool found = true;
        for(int j=0;j<m;j++){
            if(s[i+j] != k[j]){
                found = false;
                j = m+1;
            }
        }
        if(found == true){
            v.push_back(i);
        }
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}