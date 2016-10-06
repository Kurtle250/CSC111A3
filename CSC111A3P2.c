/*
 ============================================================================
 Name        : V00877791PT2.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>



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
	int row = 0;
	int leftColumn = 0;
	int centerColumn = 0;
	int rightColumn = 0;

	for(int a=0; a<height; a++){
		for(int b=0; b<(width-(a+2)); b++) {
			printDot();
		}
		for(int x=0; x<count; x++) {
			printX();
		}

		for(int b=0; b<(width-(a+2)); b++) {
					printDot();
		}
		count += 2;
		printNewline();
	}

		return EXIT_SUCCESS;
	}
