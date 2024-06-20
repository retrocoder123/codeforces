#include <bits/stdc++.h>
using namespace std;
int main () {
	int a,b,t;
	cin >> t;
	for(int i = 0; i < t; i++){
		int step=0;
		cin >> a;
		cin >> b;
		int diff = 0;
		if (a < b){
			diff = b - a;
		}else{
			diff = a - b;
		}
		if(diff % 10 == 0){
			step = diff / 10;
		}else{
			step = (diff / 10) + 1;
		}
		cout << step << "\n";
	}
}
