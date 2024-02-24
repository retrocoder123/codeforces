#include <bits/stdc++.h>
using namespace std;
int main() {
	string n;
	cin >> n;
	int count = 0;
	const char* charArray = n.c_str();
	for(int i = 0; i < n.size(); i++){
		if(charArray[i] == '4' || charArray[i] == '7'){
			count++;
		}
	}
	if(count == 4 || count == 7){
		cout << "YES";
	} else {
		cout << "NO";
	}
}
