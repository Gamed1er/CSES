#include <iostream>
#include <set>
#define lli long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    lli n, k;
    cin >> n >> k;
    k %= n;
    set<lli> children;
    for(lli i = 1; i <= n; i++){
        children.insert(i);
    }

    auto it = children.begin();
    while(!children.empty()){
        for(lli i = 0; i < k; i++){
            if(it == children.end()) it = children.begin();
            ++it;
        }
        if(it == children.end()) it = children.begin();
        cout << *it << " ";
        it = children.erase(it);
    }
    
    return 0;
}
