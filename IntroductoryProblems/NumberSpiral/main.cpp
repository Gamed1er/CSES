#include <iostream>
#include <vector>
#define lli long long int
using namespace std;

int main(){
    lli n, tmp[2], center; cin >> n;
    for(lli i = 0; i < n; i++){
        cin >> tmp[0] >> tmp[1];
        lli m = max(tmp[0], tmp[1]);
        cout << m * m - m + 1 + (m % 2 == 0 ? -(tmp[1] - tmp[0]) : (tmp[1] - tmp[0])) << endl;
    }
}
