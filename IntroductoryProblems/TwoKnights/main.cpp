#include <iostream>
#include <vector>
#define lli unsigned long long
using namespace std;

int main(){
    vector<lli> ans;
    ans.push_back(0); ans.push_back(6);
    for(lli i = 3; i <= 10000; i++){
        lli all = (i * i) * (i * i - 1) / 2;
        lli rem = (i - 2) * (i - 1) * 2 * 2; 
        ans.push_back(all - rem);
    }
    int n; cin >> n;
    for(int i = 0; i < n; i++) cout << ans[i] << endl;
}
