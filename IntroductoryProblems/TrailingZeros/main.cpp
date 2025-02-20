#include <iostream>
#include <vector>
#define lli long long int
using namespace std;

int main(){
    lli n = 0, ans = 0; cin >> n;
    lli five = 5;
    while(five <= n){
        ans += n / five;
        five *= 5;
    }
    cout << ans; 
}
