#include <iostream>
#include <vector>
#include <cstring>
#define lli long long int
using namespace std;

int ans = 0; string s, sAns = "\n";

void run(string now, vector<int> alphabet){
    if(now.length() == s.length()){
        sAns += now + "\n";
        ans++;
    }
    else{
        for(int i = 0; i < 26; i++){
            if(alphabet[i] > 0){
                alphabet[i]--;
                run(now + char(i + 'a'), alphabet);
                alphabet[i]++;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> s;
    vector<int> alphabet(26);
    alphabet.assign(26, 0);
    for(int i = 0; i < s.length(); i++){
        alphabet[s[i] - 'a']++;
    }
    run("", alphabet);
    cout << ans << sAns;
}
