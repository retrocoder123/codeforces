#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >> n;
	n++;
	for (int i = n; i <= 9999; i++) {
		const char* arr = to_string(i).c_str();
		if(arr[0] != arr[1] && arr[0] != arr[2] && arr[0] != arr[3] && arr[1] != arr[2] && arr[1] != arr[3] && arr[2] != arr[3]){
			cout << i;
			break;
		}
	}
}

