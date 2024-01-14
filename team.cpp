#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >> n;
	int output = 0;
	int petya, vasya, tonya;
	for(int i = 0;i < n; i++){
 		cin >> petya;
		cin >> vasya;
		cin >> tonya;
		if(petya + vasya + tonya >= 2){
			output++;
		}
	}
	cout << output;
}
