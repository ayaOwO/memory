#include <stdio.h>

void swap(int* first, int* second);

int main(void) {
	int first = 3;
	int second = 2;

	printf("%d, %d\n", first, second);

	swap(&first, &second);

	printf("%d, %d\n", first, second);

	return 0;
}


void swap(int* first, int* second) {
	int holder = *first;
	*first = *second;
	*second = holder;
}

