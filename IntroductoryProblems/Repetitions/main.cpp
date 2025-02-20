#include <iostream>
#include <cstring>
#define lli long long
using namespace std;

int main(){
    string s; int ans = 0, tmp = 0; char last = 'X';
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == last) tmp++;
        else{
            ans = max(ans, tmp);
            tmp = 1;
            last = s[i];
        }
    }
    ans = max(ans, tmp);
    cout << ans;
}
