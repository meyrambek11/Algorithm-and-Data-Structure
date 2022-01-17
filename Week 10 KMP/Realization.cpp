#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> v;
map<int,int> m;
map<int, int> :: iterator it;

int p2(string t){
    int len = 0;
    //cout << t << ": " << endl;
    for(int i=1;i<t.size();i++){
        //cout << t.substr(0,i) << " " << t.substr(t.size()-i,t.size()) << endl;
        string pref = t.substr(0,i);
        string suff =  t.substr(t.size()-i,t.size());
        if(suff == pref){
            len = i;
            break;
        }
    }
    //cout << "=====" << endl;
    return len;
    
}

void p(string s){
    for(int i=1;i<=s.size();i++){
        v.push_back(p2(s.substr(0,i)));
        //m[p2(s.substr(0,i))]++;
    }
}

int main(){
    string s;
    string t;
    cin >> s >> t;
    p(t + "#" + s);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    for(it = m.begin();it != m.end();it++){
        cout << it->first << " " << it->second << endl;
    }

}