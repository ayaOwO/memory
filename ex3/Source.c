#include <stdio.h>
#include "Rectangle.h"

void initializeRectangle(Rectangle* rectangle, int width, int height);

int main(void) {
	Rectangle rectangle;
	initializeRectangle(&rectangle, 3, 4);
	printf("%d, %d", rectangle.width, rectangle.height);

	return 0;
}


void initializeRectangle(Rectangle* rectangle, int width, int height) {
	rectangle->width = width;
	rectangle->height = height;
}

