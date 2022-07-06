#include <stdio.h>
#include "Rectangle.h"

#define ARRAY_SIZE 10
#define BUFFER_SIZE 100

void charArrCopy(char* src, int size, char* dst);
int charArrCompare(char* firstArray, int size, char* secondArray);
void charArrSetValues(char* arrayToSet, int size, char value);
void charArrSwap(char* firstArray, int size, char* secondArray);
void fileCopy(FILE* src, FILE* dst);

int main(void) {
	int a[ARRAY_SIZE]; int b[ARRAY_SIZE];
	charArrCopy((char*)a, sizeof(a[0]) * ARRAY_SIZE, (char*)b);

	Rectangle c[ARRAY_SIZE]; Rectangle d[ARRAY_SIZE];
	charArrCopy((char*)c, sizeof(a[0]) * ARRAY_SIZE, (char*)d);

	char e[ARRAY_SIZE];
	charArrSwap(e, ARRAY_SIZE / 2, e + ARRAY_SIZE / 2);

	FILE* sourceFile;
	fopen_s(&sourceFile, "src.txt", "r");
	FILE* dstFile;
	fopen_s(&dstFile, "dst.txt", "w");

	fileCopy(sourceFile, dstFile);
	
	fclose(sourceFile);
	fclose(dstFile);

	return 0;
}

void charArrCopy(char* src, int size, char* dst) {
	for (int i = 0; i < size; i++) {
		dst[i] = src[i];
	}
}

int charArrCompare(char* firstArray, int size, char* secondArray)
{
	for (int i = 0; i < size; i++) {
		if (firstArray[i] != secondArray[i]) {
			return 0;
		}
	}

	return 1;
}

void charArrSetValues(char* arrayToSet, int size, char value) {
	for (int i = 0; i < size; i++) {
		arrayToSet[i] = value;
	}
}

void charArrSwap(char* firstArray, int size, char* secondArray) {
	for (int i = 0; i < size; i++) {
		char holder = firstArray[i];
		firstArray[i] = secondArray[i];
		secondArray[i] = holder;
	}
}

void fileCopy(FILE* src, FILE* dst) {
	char buffer[BUFFER_SIZE];
	while (fgets(buffer, BUFFER_SIZE, src) != NULL) {
		fputs(buffer, dst);
	}
}

