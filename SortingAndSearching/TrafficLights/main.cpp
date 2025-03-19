#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int x, n;
    cin >> x >> n;
    set<int> positions = {0, x};
    multiset<int> lengths = {x};

    for (int i = 0; i < n; ++i) {
        int t;
        cin >> t;
        auto it = positions.lower_bound(t);
        int right = *it;
        int left = *(--it);

        lengths.erase(lengths.find(right - left));
        lengths.insert(t - left);
        lengths.insert(right - t);
        positions.insert(t);

        cout << *lengths.rbegin() << " ";
    }

    return 0;
}
