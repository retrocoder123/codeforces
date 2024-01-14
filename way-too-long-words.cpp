#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<string> words;
	for(int i = 0; i < n; i++){
		string word;
		cin >> word;
		words.push_back(word);
	}
	for(const auto& word : words) {
		int length = word.length();
		if(length > 10) {
			string abbreviation = "";
			abbreviation.push_back(word[0]);
			abbreviation += to_string(length - 2);
			abbreviation.push_back(word[length - 1]);
			cout << abbreviation + "\n";
		} else {
			cout << word + "\n";
		}
	}
}
