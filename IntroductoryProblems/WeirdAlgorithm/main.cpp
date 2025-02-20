#include <iostream>

using namespace std;

int main()
{
    long long int i; cin >> i;
    while(i != 1){
        cout << i << " ";
        if(i & 1) i = i * 3 + 1;
        else i >>= 1;
    }
    cout << 1;
}
