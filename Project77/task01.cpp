int factorial(int num) {
	//fool-proof
	if (num < 0) {
		return -1;
	}
	//base case
	if (num < 2) {
		return 1;
	}
	else {
		return factorial(num -1);
	}
}