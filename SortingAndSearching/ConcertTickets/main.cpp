#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, tmp;
    cin >> n >> m;
    
    multiset<int> tickets;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        tickets.insert(tmp);
    }

    for (int i = 0; i < m; i++) {
        cin >> tmp;
        auto it = tickets.upper_bound(tmp);
        if (it == tickets.begin()) cout << "-1\n";
        else {
            --it;
            cout << *it << "\n";
            tickets.erase(it);
        }
    }
}

// Sort tickets, and use <set> to fastly find a suitable price for each customers.