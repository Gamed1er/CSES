#include <iostream>
#include <vector>
#include <algorithm>
#define lli long long int
using namespace std;

bool cmp(pair<lli, lli> a, pair<lli, lli> b){
    return a.first < b.first;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    lli n, x; cin >> n >> x;
    vector<pair<lli, lli>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());

    lli L = 0, R = n - 1;
    while(L < R){
        if(v[L].first + v[R].first == x){
            cout << v[L].second << " " << v[R].second;
            break;
        }
        if(v[L].first + v[R].first < x) L++;
        else R--;
    }
    if(L >= R) cout << "IMPOSSIBLE";
}