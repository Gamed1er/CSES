#include <iostream>
#include <vector>
#define lli long long int
using namespace std;

int main(){
    int n; cin >> n;
    if(n == 2 || n == 3) cout << "NO SOLUTION";
    else if(n == 4) cout << "3 1 4 2";
    else if(n == 1) cout << "1";
    else{
        for(int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
        for(int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
    }
}
