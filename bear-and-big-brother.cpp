#include <bits/stdc++.h>
using namespace std;
int main () {
	int a, b;
	cin  >> a;
	cin  >> b;
	int limak=a, bob=b;
	for (int i = 1;i < 1000; i++){
		limak = limak*3;
		bob = bob*2;
		if (limak > bob) {
			cout << i;
			break;
		}
	}
}
