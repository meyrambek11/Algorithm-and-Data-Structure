#include <iostream>
#include <sstream>
#include <set>
#include <queue>

using namespace std;

string getId(int row,int column){
    stringstream ss;
    ss << row << "_" << column;
    return ss.str();
}

struct cell{
    public:
    int row;
    int column;
    int proceedTime;
    string Id;
    cell(int r,int c,int pt){
        row = r;
        column = c;
        proceedTime = pt;
        Id = getId(r,c);
    }
};
struct labirint{
    set<string> used;
    set<string> obstacle;
    queue<cell*> q;
    int row_count,column_count;
    int m;
    int targetR;
    int targetC;
    labirint(int r, int c, int rc, int cc, int tr, int tc){
        enqueue(r,c,0);
        row_count = r;
        column_count = c;
        targetR = tr;
        targetC = tc;
        m = -1;
    }
    void enqueue(int r,int c,int t){
        q.push(new cell(r,c,t));
        used.insert(getId(r,c));
        if(r == targetR && c == targetC){
            m = t;
        }
    }
    void run(){
        while(q.size() > 0){
            cell*currentCell = q.front();
            q.pop();
            step(currentCell->row + 1,currentCell->column,currentCell->proceedTime);
            step(currentCell->row - 1,currentCell->column,currentCell->proceedTime);
            step(currentCell->row ,currentCell->column + 1,currentCell->proceedTime);
            step(currentCell->row ,currentCell->column - 1,currentCell->proceedTime);
        }
    }
    void step(int r, int c, int t){
        string id = getId(r,c);
        if(r < 1 || c < 1) return;
        if(r > row_count || c > column_count) return;
        if(obstacle.find(id) != obstacle.end()) return;
        if(used.find(id) != used.end()) return;
        enqueue(r,c,t + 1);
    }
};

int main(){
    int row_count,colunm_count,startR,startC;
    int targetR,targetC;
    cin >> row_count >> colunm_count;
    cin >> startR >> startC;
    cin >> targetR >> targetC;

    labirint l(startR,startC,row_count,colunm_count,targetR,targetC);
    int obstacle_count;
    int obstacleR,obstacleC;
    cin >> obstacle_count;
    for(int i=0;i<obstacle_count;i++){
        cin >> obstacleR >> obstacleC;
        l.obstacle.insert(getId(obstacleR,obstacleC));
    }
    l.run();
    if(l.m == -1){
        cout << "impossible";
    }
    else{
        cout << "ok" << endl;
        cout << l.m << endl;
    }
    return 0;
}