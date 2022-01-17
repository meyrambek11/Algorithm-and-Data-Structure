#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector<int> v;
vector<int> mp;

int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        v.push_back(x);
        v.push_back(y);       
    }
    for(int i = 1;i<=n;i++){
        int cnt = 0;
        for(int j=0;j<v.size();j++){
            if(i == v[j]){
                cnt++;
            }
        }
        mp.push_back(cnt);
    }
    for(int i=0;i<mp.size();i++){
        cout << mp[i] << " ";
    }
}