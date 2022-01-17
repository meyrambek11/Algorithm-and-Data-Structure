#include<iostream>
#include<vector>
#include <string>
#include <algorithm>
using namespace std;
int maxi = 0;
vector<int> prefix_func(string s){
    int n = s.size();
    vector<int> p(n);
    p[0] = 0;
    for(int i=1; i<s.size(); i++){
        int j = p[i-1];
        while(j>0 && s[j]!=s[i])
            j = p[j-1];
        if(s[j]==s[i])
            j++;
        p[i] = j;
        if(p[i]>maxi)
            maxi = p[i];
    }
    return p;
}
int main(){
    string s,t,r;
    int x= 1;
    getline(cin,s);
    getline(cin,t);
    r = s + "#" + t + t;
    vector<int> p = prefix_func(r);
    if(s==t){
        cout << 0;
        return 0;
    }
    string q = s;
    string j = t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(maxi==s.size() && s==t)
        x=2;
   
    if(x==1){
        cout << -1;
        return 0;
    }
    s = q;
    t =  j;
        int cnt = 0;
    for(int i=0; i<r.size(); i++){
        if(i==(s.size()+t.size())+1){
            cnt = s.size()-(p[i]-1);
        }
    }
     cout << cnt;
    return 0;
}