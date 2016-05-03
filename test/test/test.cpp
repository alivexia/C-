#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> grades(11, 0);
	int scores;
	while(cin >> scores)
		if (scores <= 100)
		{
			++grades[scores / 10];
		}						  
	for (auto i : grades)
		cout << i <<",";
}