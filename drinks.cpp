#include <bits/stdc++.h>
using namespace std;
int main () {
	float n;
	cin >> n;
	float sum = 0;
	for( int i = 0;  i < n; i++) {
		float drink;
		cin >> drink;
		sum = sum + drink;
	}
	float avg = sum /n;
	cout << avg;
}
