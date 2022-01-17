#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    vector<int> v;
    map<int,int> mp;
    int c,div = 2;
    cin >> c;
    while(c>1){
        while(c%div == 0){
            // cout << div << " ";
            c = c/div;
            mp[div]++;

        }
        div++;
    }
    map<int,int>::iterator it;
    int cnt = mp.size();
    for(it = mp.begin(); it != mp.end(); it++){
        cnt--;
        pair<int,int> p = *it;
        if(p.second <= 1){
            cout << p.first;
        }else{
            cout << p.first << "^" << p.second;
        }
        if(cnt > 0){
            cout << "*";
        }
    }
}