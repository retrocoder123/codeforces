#include <bits/stdc++.h>
using namespace std;
int main () {
	long n ;
	cin >> n ;
	int luckyNumberCount = 0;
	while(n > 0){
		long tens = n % 10;
		if(tens == 4 || tens == 7) {
			luckyNumberCount++;
		}
		n = n / 10;
	}
	if(luckyNumberCount == 4 || luckyNumberCount == 7){
		cout << "YES";
	} else {
		cout << "NO";
	}
}

