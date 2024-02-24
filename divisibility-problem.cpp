#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	for(int i = 0;i < t; i++){
		int a, b;
		cin >> a;
		cin >> b;
		int r = a % b;
		if(r == 0){
			cout << r << '\n';
		}else{
			cout << b - r << '\n';
		}
	}
}

