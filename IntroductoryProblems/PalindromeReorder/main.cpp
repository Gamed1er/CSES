#include <iostream>
#include <cstring>
#define lli long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    lli alphabet[26]; 
    string n, ans = ""; cin >> n;
    for(int i = 0; i < 26; i++) alphabet[i] = 0;
    for(int i = 0; i < n.length(); i++) alphabet[n[i] - 'A']++;
    int odds = 0, oddId = -1;
    for(int i = 0; i < 26; i++){
        if(alphabet[i] % 2 == 1){
            odds++;
            oddId = i;
        }
    }
    if(odds >= 2) cout << "NO SOLUTION";
    else if(odds == 1){
        if(n.length() % 2 == 0) cout << "NO SOLUTION";
        else{
            alphabet[oddId]--;
            ans += char(oddId + 'A');
            for(int i = 0; i < 26; i++){
                string tmp;
                while(alphabet[i] > 0){
                    tmp += char(i + 'A');
                    alphabet[i] -= 2;
                }
                ans = tmp + ans + tmp;
            }
        }
    }
    else{
        for(int i = 0; i < 26; i++){
            string tmp;
            while(alphabet[i] > 0){
                tmp += char(i + 'A');
                alphabet[i] -= 2;
            }
            ans = tmp + ans + tmp;
        }
    }
    cout << ans;
}
