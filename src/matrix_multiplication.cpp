#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

int main() {

	// asks user for width and height of both matrices
	int A_width;
	int A_height;
	int B_width;
	int B_height;

	cout << "Width of first: " << endl;
	cin >> A_width;

	// inits the matrix heights and widths
	int const a_width = A_width;
	int const a_height = 3;
	int const b_width = 3;
	int const b_height = 3;

	// inits the first and second matrix
	int a[a_width][a_height] = {
		{1, 5, 0},
		{2, 1, 0},
		{0, 8, 1}
	};
	int b[b_width][b_height] = {
		{1, 2, 10},
		{0, 1, 0},
		{3, 0, 1}
	};

	// not possible if first first matrix's width is not he same as\n the second matrix's height
	if (a_width != b_height) {
		puts("This matrix is not possible because the \nfirst matrix's width is not he same as\n the second matrix's height");
		return 1;
	}
	int c[a_width][b_height];

	// sourced from https://www.programiz.com/cpp-programming/examples/matrix-multiplication
	for (int i = 0; i < a_width; i++) {
		for (int j = 0; j < b_height; j++) {
			c[i][j] = 0;
			for (int k = 0; k < b_width; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for (int i = 0; i < b_width; i++) {
		for (int j = 0; j < b_height; j++)
			printf("%i ", c[i][j]);
	}

	return 0;

}
