#include <iostream>
#include <vector>

using namespace std;

vector<int> g[100];
int n,m,x,y;

int main(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> x >> y;
        x--;
        y--;
        g[x][y] = 1;
        g[y][x] = 1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << g[i][j] << " ";
        }
        cout << endl;
    }

}