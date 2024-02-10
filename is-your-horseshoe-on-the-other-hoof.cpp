#include <bits/stdc++.h>
using namespace std;
int main () {
	int s1, s2, s3, s4;
	int u1 = 0, u2 = 0, u3 = 0, u4 = 0;
	int shoes = 0;

	cin >> s1;
	u1 = s1;

	cin >> s2;
	if(u1 != s2){
		u2 = s2;
	}

	cin >> s3;
	if(u1 != s3 && u2 != s3){
		u3 = s3;
	}

	cin >> s4;
	if(u1 != s4 && u2 != s4 && u3 != s4) {
		u4 = s4;
	}

	if(u1 != 0) {
		shoes++;
	}

	if(u2 != 0) {
		shoes++;
	}

	if(u3 != 0) {
		shoes++;
	}

	if(u4 != 0) {
		shoes++;
	}

	cout << 4 - shoes;
}
