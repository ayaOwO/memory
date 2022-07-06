#include <stdio.h>

void add(int* pNum, int incBy);

int main(void) {

	int number = 5;
	printf("%d", number);
	add(&number, 5);
	printf("%d", number);

	return 0;
}

void add(int* pNum, int incBy) {
	*pNum += incBy;
}

