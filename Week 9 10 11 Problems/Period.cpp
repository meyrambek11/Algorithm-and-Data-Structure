#include <iostream>
#include <vector>
#include <string>
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
    string s,t,q;
       cin >> s;
       if(s.size()==1){
           cout << 1;
           return 0;
       }
       vector<int> p1 = prefix_func(s);
    int sum = 0;
    int k;   
    //sort(p1.begin(),p1.end());
    k = s.size() - p1[s.size()-1]; 
    
    for(int i=0; i<k; i++){
        t += s[i];
    }
    cout << t << endl;
    q = t + "#" + s;
    vector<int> p = prefix_func(q);
    for(int i=0; i<q.size(); i++){
        if(p[i] == t.size())
            sum++;
    }
    if(s.size()>1)
        cout << sum;
    return 0;
}