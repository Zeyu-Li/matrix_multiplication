#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {

	// asks user for width and height of both matrices
	int A_width, A_height, B_height;

	cout << "First matrix: \nWidth: ";
	cin >> A_width;
	cout << "Height: ";
	cin >> A_height;
	cout << "Second matrix: \nHeight: ";
	cin >> B_height;

	// inits matrices
	vector<vector<int> > a(A_width, vector<int>(A_height)), b(A_height, vector<int>(B_height)), c(A_width, vector<int>(B_height));

	// inits the first and second matrix
	puts("\nFirst matrix input (put the elements of row seperated by spaces or linebreaks): ");
	cout << "* Remeber, this must be a " << A_width << "*" << A_height << " matrix\n\n";
	for (int i = 0; i < A_height; i++) {
		cout << "Line " << i + 1 << ": "; 
		for (int j = 0; j < A_width; ++j) {
			cin >> a[i][j];
		}
		cout << "\n";
	}

	puts("Second matrix input: \n");
	cout << "** Remeber, this must be a " << A_height << "*" << B_height << " matrix\n\n";
	for (int i = 0; i < B_height; i++) {
		cout << "Line " << i + 1 << ": ";
		for (int j = 0; j < A_height; ++j) {
			cin >> b[i][j];
		}
		cout << "\n";
	}
	// sourced from https://www.programiz.com/cpp-programming/examples/matrix-multiplication
	for (int i = 0; i < A_width; i++) {
		for (int j = 0; j < B_height; j++) {
			c[i][j] = 0;
			for (int k = 0; k < A_height; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	// output answer
	puts("The answer is: ");
	for (int i = 0; i < A_height; i++) {
		for (int j = 0; j < B_height; j++)
			printf("%i\t", c[i][j]);
		puts("\n");
	}


	return 0;

}
