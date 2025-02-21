#include <iostream>
#include <vector>
#include <algorithm>
#define lli long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    lli n, m, k, tmp;
    vector<lli> applicants, apartments;
    cin >> n >> m >> k;
    for(lli i = 0; i < n; i++){
        cin >> tmp;
        applicants.push_back(tmp);
    }
    for(lli i = 0; i < m; i++){
        cin >> tmp;
        apartments.push_back(tmp);
    }

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());

    lli ans = 0;
    while(!applicants.empty() && !apartments.empty()){
        lli applicant = applicants.back();
        lli apartment = apartments.back();
        if(abs(applicant - apartment) <= k){
            ans++;
            applicants.pop_back();
            apartments.pop_back();
        }
        else{
            if(applicant > apartment) applicants.pop_back();
            else apartments.pop_back();
        }
    }
    cout << ans;
}

// Greedy, find the BIGGEST appliciants and apartment exist
// If match, remove both of them and ANS++
// Else, remove the Bigger One 