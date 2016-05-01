#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main() {
	string word;
	getline(cin, word);
	for (auto &c : word)
		c = toupper(c);
	cout << word;
}