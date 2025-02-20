#include <iostream>
#include <vector>
#define lli long long int
using namespace std;

lli n, total = 0, ans = 9223372036854775807; vector<lli> p;

void loop(lli index, lli now){
    if(now * 2 >= total){
        ans = min(now * 2 - total, ans);
    }
    else if(index < n){
        loop(index + 1, now + p[index]);
        loop(index + 1, now);
    }
    else return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++){
        lli tmp; cin >> tmp;
        p.push_back(tmp);
        total += tmp;
    }

    loop(0, 0);
    cout << ans;
}