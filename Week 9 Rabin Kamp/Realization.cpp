#include <iostream>
#include <cmath>    
#include <vector>

using namespace std;

void find(string text, string pattern){
    vector<int> v;

    int n = text.size();
    int m = pattern.size();
    //int res = -1;

    long long p[n];
    p[0] = 1;

    for(int i = 1; i < n; ++i){
        p[i] = p[i - 1] * 31;
    }

    long long h[n];
    h[0] = int(text[0] - 96);
    for(int i = 1; i < n; ++i){
        h[i] = h[i-1] + p[i] * int(text[i] - 96);
    }

    long long hp = 0;

    for(int i  = 0; i < m; ++i){
        hp += int(pattern[i] - 96) * p[i];
    }

    for(int i = 0; i <= n; ++i){
        long long x = h[i + m - 1];
        if(i > 0){
            x -= h[i-1];
        }
        if(x == hp * p[i]){
            v.push_back(i);
            break;
        }
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

}

int main(){

    string t, p;
    cin >> t >> p;
    find(t,p);


    return 0;
}