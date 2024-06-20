#include <bits/stdc++.h>
using namespace std;
int main () {
	int y;
	int w;
	cin >> y;
	cin >> w;
	int dotschances;
	int maximum=0;
	if(y > w){
		maximum= y;
	}else{
		maximum= w;
	}
	dotschances= 6 - maximum+1;
	if(dotschances == 6){
		cout << "1/1";
	}else if(dotschances == 5){
		cout << "5/6";
	}else if(dotschances == 4){
		cout << "2/3";
	}else if(dotschances == 3){
		cout << "1/2";
	}else if(dotschances == 2){
		cout << "1/3";
	}else if(dotschances == 1){
		cout <<	"1/6";
	}
}
