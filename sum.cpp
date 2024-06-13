#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	int a;
	int b;
	int c;
	for(int i = 0; i < t; i++){
		cin >> a >> b >> c;
		if (a + b == c || b + c == a || c + a == b ){
			cout << "yes\n";
		}else{
			cout << "no\n";
		}
	}
}
