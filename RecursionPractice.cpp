// practice with recursion and recursive functions
// june 27 2022

#include <iostream>
using namespace std;

int recursive_sum(int m, int n) {        // m must be less than n for this to work. 
	if (m == n)                          // MUST use a base case or recursion will be infinite. 
		return m;
	return m + recursive_sum(m + 1, n);  // increment m to get m = n, to stop the recursion.
}

int recursive_prod(int f) {             
	if (f == 1)                          // This one is for factorials.
		return f;
	return f * recursive_prod(f - 1);
}

int main() {

	int m = 1, n = 2;
	int f; 

	cout << "Enter a number to calculate a factorial." << endl;
	cout << "Number: ";
	cin >> f;
	
	
	cout << "sum = " << recursive_sum(m, n) << endl;
	cout << "product = " << recursive_prod(f) << endl;
	

	system("pause>0");
}