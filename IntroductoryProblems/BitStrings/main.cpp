#include <iostream>
#include <vector>
#define lli long long int
#define MOD 1000000007
using namespace std;

int main(){
    lli n, ans = 1; cin >> n;
    for(lli i = 0; i < n; i++){
        ans *= 2;
        ans %= MOD;
    }
    cout << ans;
}
