#include <iostream>
#include <vector>
#define lli long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    lli n, ans = -1000000001, now = 0; cin >> n;
    vector<lli> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(ans < v[i]) ans = v[i];
    }

    for(int i = 0; i < n; i++){
        now += v[i];
        if(now > ans) ans = now;
        if(now < 0) now = 0;
    }
    cout << ans;
}

// Maximum Subarray Sum Algorithm
// Remember to reduce the negative number 
