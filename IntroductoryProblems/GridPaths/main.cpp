#include <iostream>
#include <vector>
#include <cstring>
#define lli long long int
using namespace std;

int ans = 0;
string route;

void run(int x, int y, bool vis[9][9], int index){
    if(vis[x][y]) return;
    if(x == 1 && y == 7){
        if(index == 48) ans++;
        return;
    }
    if(index == 48) return;

    if (vis[x-1][y] && vis[x+1][y] && !vis[x][y-1] && !vis[x][y+1]) return;
    if (!vis[x-1][y] && !vis[x+1][y] && vis[x][y-1] && vis[x][y+1]) return;

    vis[x][y] = true;
    if(route[index] != '?'){
        if(route[index] == 'U') run(x, y - 1, vis, index + 1);
        else if(route[index] == 'D') run(x, y + 1, vis, index + 1);
        else if(route[index] == 'L') run(x - 1, y, vis, index + 1);
        else run(x + 1, y, vis, index + 1);
    }
    else{
        run(x, y - 1, vis, index + 1);
        run(x, y + 1, vis, index + 1);
        run(x - 1, y, vis, index + 1);
        run(x + 1, y, vis, index + 1);
    }
    vis[x][y] = false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> route;
    bool vis[9][9];
    for(int y = 0; y < 9; y++) for(int x = 0; x < 9; x++){
        if(y == 0 || y == 8 || x == 0 || x == 8) vis[x][y] = true;
        else vis[x][y] = false;
    }
    run(1, 1, vis, 0);
    cout << ans;
}

//??????R??????U??????????????????????????LD????D?