#include <bits/stdc++.h>
using namespace std;

string f(string s){
    int l = s.size()-1;
    char c = s[l];
    int ans = 0;
    for(int i=1;i < s.size();i++){
        ans++;
        s[i] = s[i-1]
        if(ans == s.size()-1){
            s[0] = c;
        }
    }
    return s;
}
int main(){
    string s,k;
    cin >> s;
    /*if(s.size() != k.size()){
        cout << -1 << endl;
        return 0;
    }*/
    int cnt = 0;
    cout << f(s);

}