#include <iostream>
#include <vector>
#define lli long long int
#define f first
#define s second
using namespace std;

lli run(lli a, lli b, lli MOD){
    if(b > 2){
        lli ans = run(a, b/2, MOD) % MOD;
        if (b % 2 == 1) return (ans * ans % MOD) * a % MOD;
        else return ans * ans % MOD;
    }
    else{
        if(b == 1) return a;
        else if(b == 2) return a * a;
        else return 1;
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    lli n, a, b, c; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        cout << run(a, run(b, c, 1000000006), 1000000007) << endl;
    }
}

// 2 ^ (2 ^)