#include <iostream>
#include <deque>
#include <algorithm>
#define lli long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    deque<lli> child;
    lli n, x, tmp, ans = 0;
    cin >> n >> x;

    for(lli i = 0; i < n; i++){
        cin >> tmp;
        child.push_back(tmp);
    }
    sort(child.begin(), child.end());

    while(child.size() >= 2){
        int a = child.front();
        int b = child.back();
        if(a + b <= x) child.pop_front();
        child.pop_back();
        ans++;
    }
    if(!child.empty()) ans++;

    cout << ans;
}

// Greedy, find the Heavyist and Lightist child in the array.
// If their weight is more than x, the Heavyist child get on gondola lonely and remove it from the array.
// Else, Both of them get on gondola and remove both of them from the array.