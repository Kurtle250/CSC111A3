/*
 ============================================================================
 Name        : CSC111A3P3.c
 Author      : Kurt Elliott
 Description : CSC111 Volume of a Cone matrix 10x9
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float volume_of_a_cone(float r, float h){
		float area = M_PI*(r*r);
		float volume4cone = (area * h)/3;
		return volume4cone;
} /* Volume of a cone function */



int main(){
	float coneRadius=1;//cone radius
	float coneHeight=1;//cone height
	int maxWidth=11;//matrix width
	int maxHeight=11;//matrix height
	int rowNumber = 1;


	printf("h\tr=1\tr=2\tr=3\tr=4\tr=5\tr=6\tr=7\tr=8\tr=9\n");

	for(int rows=1; rows<maxHeight; rows++){
		printf("%d\t",rowNumber++);

	for(int columns=2; columns<maxWidth; columns++) {
		printf("%0.2f\t",volume_of_a_cone(coneRadius,coneHeight));
		coneRadius++;
			}
		printf("\n");
		coneRadius=1;
		coneHeight++;
		}


return EXIT_SUCCESS;
}/* This function will compute a matrix of cone volumes from height=1-10 to radius=1-9  */

