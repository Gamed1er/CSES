#include <iostream>
#include <vector>
#include <cmath>
#define lli long long int
#define f first
#define s second
#define MAX 1000001
using namespace std;

vector<int> prime;

void find_prime(){
    vector<bool> is_prime(MAX, true);
    for(int i = 2; i <= sqrt(MAX); i++){
        if(is_prime[i]){
            prime.push_back(i);
            for(int j = i * i; j < MAX; j += i){
                is_prime[j] = false;
            }
        }
        //cout << i << endl;
    }
    for(int i = sqrt(MAX) - 2; i < MAX; i++){
        if(is_prime[i]) prime.push_back(i);
    }
}

struct divisor{
    lli base = 0;
    lli power = 0;
};

vector<divisor> count(int num) {
    vector<divisor> v;
    int l = 0;
    for (int i = 0; i < prime.size() && prime[i] * prime[i] <= num; i++) {
        l = 0;
        while (num % prime[i] == 0) {
            num /= prime[i];
            l++;
        }
        if (l > 0) v.push_back({prime[i], l + 1});
        if (num == 1) break;
    }
    if (num > 1) v.push_back({num, 2});
    return v;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    find_prime();

    lli m;
    cin >> m;
    if(m == 1) cout << 1 << endl;
    else{
        vector<divisor> v = count(m);
        lli ans = 1, tmp = 0;
        for(int i = 0; i < v.size(); i++){
            tmp = 0;
            for(int j = 0; j < v[i].power; j++){
                tmp += pow(v[i].base, j);
            }
            ans *= tmp;
        }
        cout << ans << endl;
    }
}
