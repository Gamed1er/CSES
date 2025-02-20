#include <iostream>
#include <vector>
#define lli long long int
using namespace std;

int main(){
    lli t, a, b; cin >> t;
    for(int T = 0; T < t; T++){
        cin >> a >> b;
        if((a + b) % 3 != 0 || abs(a - b) > min(a, b)) cout << "NO\n"; else cout << "YES\n";
    }
}
