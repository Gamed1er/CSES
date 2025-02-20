#include <iostream>
#include <vector>
#include <cstring>
#include <math.h>
#define lli long long int
using namespace std;

char change(char text){
    if(text == '0') return '1';
    else return '0';
}

int main(){
    ios::sync_with_stdio(false);
    cout.tie(0);

    lli n; cin >> n;
    string GrayCode = "";
    for(int i = 0; i < n; i++) GrayCode += '0';
    for(int i = 0; i < pow(2, n); i += 2){
        for(int j = n - 1; j > 0; j--){
            if(GrayCode[j] == '1'){
                GrayCode[j - 1] = change(GrayCode[j - 1]);
                break;
            }
        }
        cout << GrayCode << endl;
        GrayCode[n - 1] = change(GrayCode[n - 1]);
        cout << GrayCode << endl;
    }
}

// 0000
// 
//
