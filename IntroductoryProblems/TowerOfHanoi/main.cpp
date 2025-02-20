#include <iostream>
#include <cmath>
using namespace std;

void Towers(int n,char a,char b,char c){
	if(n==1){
		cout << a << " " << c << endl;
	}
	else{
		Towers(n-1,a,c,b);
		cout << a << " " << c << endl;
		Towers(n-1,b,a,c);
	}
}
int main(int argc, char *argv[]) {
	int n;
	cin >> n;
    cout << pow(2, n) - 1 << endl;
	Towers(n,'1','2','3');
	cout<< endl;
}