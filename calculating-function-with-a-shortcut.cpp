#include <bits/stdc++.h>
using namespace std;
int main () {
	int64_t n, result, two = 2, minusOne = -1;
	cin >> n;
	if(n % two == 0){
		result = n / two;
	}else{
		result = minusOne * n / two + minusOne;
	}
	cout << result;
}
