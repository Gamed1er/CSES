#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, num;
    cin >> n >> m;
    vector<int> pos(n + 2), point(n + 2);
    for(int i = 1; i <= n; i++){
        cin >> num;
        pos[num] = i;
        point[i] = num;
    }
    pos[n + 1] = n + 1;
    pos[0] = 0;
    int ans = 1;
    for(int i = 2; i <= n; i++){
        if(pos[i] < pos[i - 1]) ans++;
    }
    
    int a1, b1, tmp;
    for(int i = 0; i < m; i++){
        cin >> a1 >> b1;
        if (a1 > b1) swap(a1, b1);
        int a2 = point[a1], b2 = point[b1];
        swap(point[a1], point[b1]);

        if(pos[a2 - 1] < pos[a2] && pos[a2 - 1] > a1) ans++;
        if(pos[a2 - 1] > pos[a2] && pos[a2 - 1] < a1) ans--;
        if(pos[a2] < pos[a2 + 1] && pos[a2 + 1] < a1) ans++;
        if(pos[a2] > pos[a2 + 1] && pos[a2 + 1] > a1) ans--;
        pos[a2] = b1;

        if(pos[b2 - 1] < pos[b2] && pos[b2 - 1] > b1) ans++;
        if(pos[b2 - 1] > pos[b2] && pos[b2 - 1] < b1) ans--;
        if(pos[b2] < pos[b2 + 1] && pos[b2 + 1] < b1) ans++;
        if(pos[b2] > pos[b2 + 1] && pos[b2 + 1] > b1) ans--;
        pos[b2] = a1;

        cout << ans << endl;
    }
}

// 4 2 1 3 5

// 4 1 2 3 5

// pos  2 1 3 0 4
// pos* 1 2 3 0 4