#include "main.h"


void test(int n) {
	cout << n << endl;
	n++;
	if (n <= 10) {
		test(n);
	}
}

int main() {
	int number;
	cout << "Input: ";
	cin >> number;

	cout << endl;
	return 0;
}