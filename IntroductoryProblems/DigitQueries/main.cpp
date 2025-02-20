#include <iostream>
#include <vector>
#include <cmath>
#define lli long long int
using namespace std;

lli sign[20]; // 儲存各數字範圍的長度

void run(lli target){
    lli i = 0, start = 1;
    while(target > sign[i]){
        target -= sign[i];
        i++;
        start *= 10;
    }
    
    lli number = start + (target - 1) / (i + 1); // 找到目標所在的數字
    lli digitIndex = (target - 1) % (i + 1);     // 找到數字內的索引

    cout << to_string(number)[digitIndex] << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // 預先計算各數字範圍的長度
    sign[0] = 9; // 1 位數 (1~9) 共有 9 位
    for(lli i = 1, pow10 = 10; i < 20; i++, pow10 *= 10){
        sign[i] = 9 * (i + 1) * pow10;
    }

    lli n; cin >> n;
    for(lli i = 0; i < n; i++){
        lli tmp; cin >> tmp;
        run(tmp);
    }
}
