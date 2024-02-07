#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,t;
	cin >> t;
	for(int i = 0;i < t; i++){
		cin >> n;
		if(n % 2 == 1){
			cout << n / 2 << "\n";
		}else{
			cout << n / 2 - 1 << "\n";
		}
	}
}
