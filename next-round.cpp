#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	int k;
	cin >> n;
	cin >> k;
	int output = 0;
	int remedialScore = 0;
	for(int i = 1 ;i <= n; i++){
		int a;
		cin >> a;
		if(i == k){
			remedialScore = a;
		}
		if(a > 0 && remedialScore > a){
			output = i - 1;
			break;
		} else if(a > 0) {
			output = i;
		}
	}
	cout << output;
}
