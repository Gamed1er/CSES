#include <iostream>
#include <vector>
#include <algorithm>
#define lli long long int
using namespace std;

bool cmp(pair<lli, lli> a, pair<lli, lli> b){
    if(a.second != b.second) return a.second < b.second;
    else return a.first < b.first;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    lli n, ans = 0, now = 0; cin >> n;
    vector<pair<lli, lli>> movie(n);
    for(int i = 0; i < n; i++) cin >> movie[i].first >> movie[i].second;

    sort(movie.begin(), movie.end(), cmp);

    for(int i = 0; i < n; i++){
        if(now <= movie[i].first){
            ans++;
            now = movie[i].second;
        }
    }
    cout << ans;
}

// Greedy Method
// Sort the movie by the end of the time, and search movie been seen by the start of the time.