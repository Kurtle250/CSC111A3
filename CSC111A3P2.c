/*
 ============================================================================
 Name        : CSC111A3P3.c
 Author      : Kurt Elliott
 Description : CSC111 Printing pattern
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

/*
This code is for printing a pattern of Xs and .s

.....X.....
....XXX....
...XXXXX...
..XXXXXXX..
.XXXXXXXXX.
XXXXXXXXXXX
 */



void printDot(){
	printf(".");
}/* printDot */

void printX(){
	printf("X");
}/* printX */

void printNewline(){
	printf("\n");
}/* printNewline */



int main(){

	int width=7;
	int height=6;
	int count = 1;
	int leftColumn = 0;
	int centerColumn = 0;
	int rightColumn = 0;

	for(int leftColumn=0; leftColumn<height; leftColumn++){
		for(int b=0; b<(width-(leftColumn+2)); b++) {
			printDot();
		}
		for(int centerColumn=0; centerColumn<count; centerColumn++) {
			printX();
		}

		for(int rightColumn=0; rightColumn<(width-(leftColumn+2)); rightColumn++) {
					printDot();
		}
		count += 2;
		printNewline();
	}

		return EXIT_SUCCESS;
	}
