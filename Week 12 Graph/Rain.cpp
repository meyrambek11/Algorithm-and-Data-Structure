#include <iostream>
#include <map>
#include <vector>

using namespace std;
vector<pair<int,int> > v;
vector<int> mp;
int cnt = 0;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            if(a[i][j] == 1){
                v.push_back(make_pair(i,j));
            }
        }
    }
    for(int i=1;i<=n;i++){
        int x;cin >> x;
        if(x != 1){
            mp.push_back(i);
        }
    }
    for(int i=0;i<mp.size();i++){
        for(int j=0;j<v.size();j++){
            if(mp[i] == v[j].first){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}