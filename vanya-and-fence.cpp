#include <bits/stdc++.h>
using namespace std;
int main () {
	int n, h;
	cin >> n;
	cin >> h;
	int height;
	int roadWidth = 0;
	for(int i = 0; i < n; i++){
		cin >> height;
		if (height > h ){
			roadWidth = roadWidth + 2;
		}else{
			roadWidth = roadWidth + 1;
		}
	}
	cout << roadWidth;
}
