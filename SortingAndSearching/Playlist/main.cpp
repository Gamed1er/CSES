#include <iostream>
#include <vector>
#include <set>
#define lli long long int
#define f first
#define s second
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> v(n);
    set<int> s;
    for(int i = 0; i < n; i++) cin >> v[i];
    
    int L = 0, R = 0, ans = 0;
    for(R = 0; R < n; R++){
        while(s.count(v[R])){
            s.erase(v[L]);
            L++;
        }
        s.insert(v[R]);
        ans = max(ans, R - L + 1);
    }
    cout << ans;
}
