#include <stdio.h>

#define ARRAY_SIZE 10

void printArray(int* arrayToPrint, int size);

int main(void) {
	int numberArray[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; i++) {
		numberArray[i] = i;
	}

	printArray(numberArray, ARRAY_SIZE);

	return 0;
}

void printArray(int* arrayToPrint, int size) {
	int i;

	for (i = 0; i < size - 1; i++) {
		printf("%d, ", arrayToPrint[i]);
	}
	
	printf("%d", arrayToPrint[i]);
}

