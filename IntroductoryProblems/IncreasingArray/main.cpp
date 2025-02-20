#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long int n; cin >> n;
    vector<long long int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    long long int ans = 0;
    for(long long int i = 1; i < n; i++){
        if(vec[i] < vec[i - 1]){
            ans += vec[i - 1] - vec[i];
            vec[i] = vec[i - 1];
        }
    }
    cout << ans;
}

//6  