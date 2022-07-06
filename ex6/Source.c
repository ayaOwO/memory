#include <stdio.h>
#include "Rectangle.h"

#define ARRAY_SIZE 10

void printArray(Rectangle* arrayToPrint, int size);
void printRectangle(Rectangle rectangle);

int main(void) {

	Rectangle rectangleArray[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; i++) {
		Rectangle rectangle = { i, i + 1 };
		rectangleArray[i] = rectangle;
	}

	printArray(rectangleArray, ARRAY_SIZE);

	return 0;
}

void printArray(Rectangle* arrayToPrint, int size) {
	int i;

	for (i = 0; i < size - 1; i++) {
		printf("Rectangle %d\n", i);
		printRectangle(arrayToPrint[i]);
		printf("\n\n");
	}
	
	printf("Rectangle %d\n", i);
	printRectangle(arrayToPrint[i]);
}

void printRectangle(Rectangle rectangle) {
	printf("Width: %d\n", rectangle.width);
	printf("Height: %d", rectangle.height);
}

