#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >> n;
	int occupancy,capacity,rooms=0;
	for(int i = 0;i < n; i++){
		cin >> occupancy;
		cin >> capacity;
		if(occupancy + 2 <= capacity){
			rooms++;
		}
	}
	cout << rooms;
} 
