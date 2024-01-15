#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	string stones;
	cin >> n;
	cin >> stones;
	int output = 0;
	const char* stoneColor = stones.c_str();
	for(int i = 1; i < n; i++){
		if(stoneColor[i - 1] == stoneColor[i]){
			output++;
		}
	}
	cout << output;
}

 
