#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	int k = 1;
	for(int i = 1; i <= t; i++){
		int k;
		cin >> k;
		int output = 1;
		for(int j = 1; j <= k; j++){
			output++;
			if(output % 3 == 0){
				output++;
			}else if(output % 10 == 3){
				output++;
			}
		}
		cout << output << "\n";
	}
}
