#include <iostream>
#define lli long long int
using namespace std;

int main()
{
    lli n, x = 0, input; cin >> n;

    for(int i = 1; i <= n; i++) x ^= i;

    for(int i = 0; i < n-1; i++){
        cin >> input;
        x ^= input;
    }

    cout << x;
}
