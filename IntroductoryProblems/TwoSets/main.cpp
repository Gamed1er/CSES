#include <iostream>
#include <vector>
#define lli long long
using namespace std;

int main(){
    lli n; cin >> n;
    if(n % 4 == 1 || n % 4 == 2) cout << "NO";
    else{
        vector<bool> vec; lli goal = (n + 1) * n / 4, ans = 0; 
        for(lli i = 0; i < n; i++) vec.push_back(false);
        for(lli i = n; i > 0; i--){
            if(goal - i >= 0){
                goal -= i;
                vec[i - 1] = true;
                ans++;
                if(goal == 0) break;
            }
        }
        //PRlli
        if(goal != 0) cout << "NO";
        else{
            cout << "YES\n" << ans << "\n";
            for(lli i = 1; i <= n; i++){
                if(vec[i - 1]) cout << i << " ";
            } cout << "\n" << n - ans << "\n";
            for(lli i = 1; i <= n; i++){
                if(!vec[i - 1]) cout << i << " ";
            }
        }
    }
}

//(n + 1)(n) / 4
