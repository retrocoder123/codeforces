#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	int a;
	int b;
	int c;
	cin >> t;
	for(int i = 0;i < t; i++){
		cin >> a;
		cin >> b;
		cin >> c;
		if(a == b){
			cout << c << endl;
		}else if(a == c){
			cout << b << endl;
		}else if(b == c){
			cout << a << endl;
		}
	}
}

	
