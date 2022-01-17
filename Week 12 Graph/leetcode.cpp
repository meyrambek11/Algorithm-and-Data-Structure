#include <iostream>
#include <vector>
using namespace std;
vector<bool> used(100,false);
vector<vector<int> > v(100,vector<int>(100,0));
int n;
int cnt = 0;
bool ok = false;
void dfs(int s, int p){
    used[s] = true;
    for(int i = 1;i<=n;i++){
        if(!used[i] && i != p && v[s][i] == 1){
            dfs(i,s);
        }
        else if(v[s][i] == 1 && used[i] && p != i){
            ok = true;
            cnt++;
        }
    }
}

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int x;cin >> x;
            v[i][j] = x;
        }
    }
    for(int i=1;i<=n;i++){
        if(!used[i]){
            dfs(i,0);
        }
    }

    if(ok){
        cout << "YES" << endl;
        cout << cnt;
    }
    else
    {
        cout << "NO" << endl;
    }
    

}