#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >> n;
	int f = 0;
	for(int i = 1 ;i <= n; i++){
		if( i % 2 == 1){
			f = f - i;
		}else{
			f = f + i;
		}
	}
	cout << f;
}

