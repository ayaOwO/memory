#include <stdio.h>

#define FIBONACCI_START 1
#define ARRAY_SIZE 10

void fillFibonacci(int* arrayToFill, int size);
int getFibonacci(int index);
void swap(int* firstValue, int* second);

int main(void) {
	int fibonacciArray[ARRAY_SIZE];
	
	fillFibonacci(fibonacciArray, ARRAY_SIZE);

	for (int i = 0; i < ARRAY_SIZE; i++) {
		printf("%d\n", fibonacciArray[i]);
	}

	return 0;
}

void fillFibonacci(int* arrayToFill, int size) {
	for (int i = 0; i < size; i++) {
		arrayToFill[i] = getFibonacci(i);
	}
}

int getFibonacci(int index) {
	int firstValue = FIBONACCI_START;
	int secondValue = 1;

	for (int i = 2; i < index; i++) {
		int nextValue = firstValue + secondValue;
		swap(&firstValue, &secondValue);
		firstValue = nextValue;
	}

	if (index == 0) {
		return FIBONACCI_START;
	}
	else if (index == 1) {
		return secondValue;
	}

	return firstValue;
}

void swap(int* first, int* second) {
	int holder = *first;
	*first = *second;
	*second = holder;
}

