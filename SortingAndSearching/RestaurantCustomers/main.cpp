#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#define lli long long int
#define f first
#define s second
using namespace std;

bool cmp(pair<lli, lli> a, pair<lli, lli> b){
    if(a.f == b.f) return a.s < b.s; else return a.f < b.f;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    lli n; cin >> n;
    vector<pair<lli, lli>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].f >> v[i].s;
    }
    sort(v.begin(), v.end(), cmp);

    set<lli> now; lli ans = 0;
    for(int i = 0; i < n; i++){
        now.insert(v[i].s);
        auto it = now.lower_bound(v[i].f);
        now.erase(now.begin(), it);
        ans = max(ans, (lli)now.size());
    }
    cout << ans;
}

// The Maxmimum of Customers must in the time that someone get in to the restaurant.
// Run of each Customers Arrival Time, add it in to <set>
// In the same time, remove all of the Customers who leave the restaurant.
// Then count how many customers in restaurant, compare with Answer.
