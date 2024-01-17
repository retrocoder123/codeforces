#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >> n;
	int problem = 0;
	for(int i = 0;i < n; i++){
		cin >> problem;
		if(problem == 1){
			break;
		}
	}
	if(problem == 1) {
		cout << "HARD";
	} else {
		cout << "EASY";
	}

}

