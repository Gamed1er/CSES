#include <iostream>
#include <vector>
#define lli long long int
#define f first
#define s second
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    lli n, q, tmp, tmp1;
    cin >> n >> q;
    vector<lli> v(n + 1, 0);
    v[0] = 0;

    for(int i = 1; i <= n; i++){
        cin >> tmp;
        v[i] = v[i - 1] + tmp;
    }

    for(int i = 0; i < q; i++){
        cin >> tmp >> tmp1;
        cout << v[tmp1] - v[tmp - 1] << endl;
    }
}


// 0 3 2 4  5  1  1  5  3
// 0 3 5 9 14 15 16 21 24