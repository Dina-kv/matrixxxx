#include <stdio.h>
#include <math.h>

#define ROWS 5
#define COLS 5

int main() {
	double matrix[ROWS][COLS];
	int i;
	int j;
	double S = 0.0;
	double maxChislo;
	int maxRow = 0;
	int maxCol = 0;
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j ++) {
			matrix[i][j] = (i+1.0)/10.0  +  (j+1.0)/10.0;
		}
	}
	printf("Дооо:\n");
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			printf("%8.2f", matrix[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < ROWS; i++) {
		double chislitel = matrix[i][j];
		double znamenatel = matrix[i][j+1];
        	if (znamenatel == 0) {
                	printf("Не делится на нуль\n");
                	return 1;
        	}
		double exponent = chislitel * (chislitel / znamenatel);
		S += exp(exponent);
	}
	printf("\nПолученное S: %.4f\n", S);
	
	maxChislo = matrix[i][j];
	maxRow = 0;
	maxCol = 0;
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			if(matrix[i][j] > maxChislo) {
				maxChislo = matrix[i][j];
				maxRow = i;
				maxCol = j;
			}
		}
	}
	printf("Максимальное: %.2f\n", maxChislo);
	matrix[maxRow][maxCol] = S;
	printf("\nПослеее:\n");
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			printf("%8.2f", matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
