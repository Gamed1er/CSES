#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> pos(n + 1);
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        pos[num] = i;
    }

    int ans = 1;
    for(int i = 2; i <= n; i++){
        if(pos[i] < pos[i - 1]) ans++;
    }
    cout << ans;
}
