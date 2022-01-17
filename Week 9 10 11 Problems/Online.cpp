#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> prefix_func(string s){
    int n = s.size();
    vector<int> p(n);
    p[0] = 0;
    for(int i=1; i<n; i++){
        int j = p[i-1];
        while(j>0 && s[j]!=s[i])
            j = p[j-1];
        if(s[j]==s[i])
            j++;
        p[i] = j;
    }
    return p;
}

int main(){
    string s1;
    cin >> s1;
    vector<int> v1 = prefix_func(s1);
    //sort(v1.begin(),v1.end());
    for(int i=0;i<v1.size();i++){
        cout << v1[i] << " ";
    } 
}