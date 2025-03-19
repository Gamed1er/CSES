#include <iostream>
#include <vector>
using namespace std;
#define lli long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    lli n, m;
    cin >> n >> m;

    vector<lli> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    lli l[n][18]; 
    for (int i = 0; i < n; i++) {
        l[i][0] = v[i];
    }
    for (int j = 1; j < 18; j++) {
        for (int i = 0; i + (1 << j) <= n; i++) {
            l[i][j] = min(l[i][j-1], l[i + (1 << (j-1))][j-1]);
        }
    }

    for (int i = 0; i < m; i++) {
        lli a, b;
        cin >> a >> b;
        a--, b--;
        lli len = b - a + 1;
        lli k = 31 - __builtin_clz(len);
        lli ans = min(l[a][k], l[b - (1 << k) + 1][k]);

        cout << ans << "\n";
    }

    return 0;
}
