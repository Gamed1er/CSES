#include <iostream>
#include <vector>
#include <algorithm>
#define lli long long int
#define f first
#define s second
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    lli n, ans = 0; cin >> n;
    vector<lli> v(n);
    for(lli i = 0; i < n; i++) cin >> v[i]; 

    sort(v.begin(), v.end());
    lli mid = v[(n + 1) / 2 - 1];
    for(lli i = 0; i < n; i++) ans += abs(v[i] - mid);
    cout << ans;
}
