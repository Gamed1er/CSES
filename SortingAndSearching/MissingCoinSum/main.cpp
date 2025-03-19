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

    lli n, ans = 1; cin >> n;
    vector<lli> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    for(auto i : v){
        if(i > ans) break;
        ans += i;
    }
    cout << ans;
}