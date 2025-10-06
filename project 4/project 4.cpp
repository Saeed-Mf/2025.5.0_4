//Saeed Manafi

#include <iostream>

using namespace std;

int main() {
	string A;
	cout << "enter word:";
	cin >> A;
	if (A[0] == 'A' || A[0] =='a') {
		cout << "Starts with A\n";
	}
	else
	{
		cout << "no\n";
	}

	return 0;
}