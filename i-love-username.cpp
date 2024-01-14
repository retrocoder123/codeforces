#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >> n;
	int amazing = 0;
	int min, max;
	for (int i = 0 ; i < n; i++) {
		int result;
		cin >> result;
		if(i == 0) {
			min = max = result;
		} else if(result < min){
			amazing++;
			min = result;
		} else if(result > max){
			amazing++;
			max = result;
		}
	}
	cout << amazing;
}
