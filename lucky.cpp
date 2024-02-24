#include <bits/stdc++.h>
using namespace std;
int main () {
 	int t;
	cin >> t;
	for(int i = 0;i < t; i++){
		string ticket;
		cin >> ticket;
		const char* charray = ticket.c_str();
		int first = charray[0] - '0';
		int second = charray[1] - '0';
		int third = charray[2] - '0';
		int fourth = charray[3] - '0';
		int fifth = charray[4] - '0';
		int sixth = charray[5] - '0';
		int first3digit = first + second + third;
		int last3digit  =  fourth + fifth + sixth;
		if(first3digit == last3digit){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
}

