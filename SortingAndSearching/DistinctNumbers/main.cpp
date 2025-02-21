#include <iostream>
#include <set>
#define lli long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    set<int> s;
    lli n, tmp;
    cin >> n;
    for(lli i = 0; i < n; i++){
        cin >> tmp;
        s.insert(tmp);
    }
    cout << s.size();
}

// Just use <set>, it's easy