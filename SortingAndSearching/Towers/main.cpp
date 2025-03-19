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

    multiset <lli> s;
    int n, k; cin >> n >> k; s.insert(k);
    for(int i = 1; i < n; i++){
        cin >> k;
        auto it = s.upper_bound(k);
        if (it != s.end() && *it != k) {
            //++it;
            s.erase(it);
        }
        s.insert(k);
    }
    cout << s.size();
}