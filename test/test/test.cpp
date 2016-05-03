#include<iostream>
#include<string>
using namespace std;
int main() {
	string s("Some string");
	if (s.begin() != s.end()) {
		auto it = s.begin();
		*it = tolower(*it);
	}
	cout << s;
}