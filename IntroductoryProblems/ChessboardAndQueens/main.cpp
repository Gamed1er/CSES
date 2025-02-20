#include <iostream>
#include <vector>
#define lli long long int
using namespace std;

struct Board{
    bool data[8][8];
};
int ans = 0;

void loop(int x, Board board){
    if(x == 8) ans++;
    else for(int y = 0; y < 8; y++){
        if(board.data[x][y]){
            //SET NEW BOARD
            Board newBoard = board;
            newBoard.data[x][y] = false;
            for(int i = 0; i < 8; i++) newBoard.data[x][i] = false;
            for(int i = 0; i < 8; i++) newBoard.data[i][y] = false;
            for(int i = 0; i < 8; i++) if(x - i >= 0 && y - i >= 0) newBoard.data[x - i][y - i] = false;
            for(int i = 0; i < 8; i++) if(x + i <= 7 && y - i >= 0) newBoard.data[x + i][y - i] = false;
            for(int i = 0; i < 8; i++) if(x - i >= 0 && y + i <= 7) newBoard.data[x - i][y + i] = false;
            for(int i = 0; i < 8; i++) if(x + i <= 7 && y + i <= 7) newBoard.data[x + i][y + i] = false;
            loop(x + 1, newBoard);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    Board originalBoard;
    for(int y = 0; y < 8; y++) for(int x = 0; x < 8; x++) {
        char tmp;
        cin >> tmp;
        originalBoard.data[x][y] = (tmp == '.');
    }
    loop(0, originalBoard);
    cout << ans;
}