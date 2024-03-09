#include <bits/stdc++.h>
using namespace std;
int main () {
	int k;
	int n;
	int w;
	cin >> k;
	cin >> n;
	cin >> w;
	int totalPrice = 0;
	for(int i = 1;i <= w; i++){
		totalPrice += i*k;
	}
	if(totalPrice <= n ){
		cout << "0";
	}else{
		cout << totalPrice - n;
	}
}
