#include <iostream>
#include <vector>
#define lli long long int
#define f first
#define s second
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        v[i] = i;
    }
    int tmp = 0, killed = 0, i = -1;
    while(killed < n){
        i = (i + 1) % v.size();
        if(!v[i]) continue;
        tmp++;
        if(tmp == 2){
            tmp = 0;
            cout << v[i] << " ";
            v.erase(v.begin() + i);
            killed++;
            i--;
        }
    }
}