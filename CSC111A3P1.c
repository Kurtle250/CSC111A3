#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// (1)Computes area of a circle with radius r

	float circleArea(float r){

	return M_PI*(r*r);

	}/* circleArea */

// (2)Computes perimeter of a circle with radius r

	float circlePerimeter(float r){

	return M_PI*(r+r);

	}/* circlePerimeter */

// (3)Computes volume of a sphere with radius r

	float volume_of_a_sphere(float r)
	{
	float volumeSphere;

	volumeSphere = (4/3)*M_PI*(r*r*r);

	return volumeSphere;

	}/* Volume of a sphere*/

// (4)Computes the surface area of a sphere with radius r//

	float surface_area_of_a_sphere(float r){

	return 4*M_PI*(r*r);
	}//Surface area of sphere//

// (5)Computes volume of a cylinder with base radius r and height h//

	float cylinderVolume(float r, float h){
	float baseArea = circleArea(r);
	float cylinderVolume = h*baseArea;
	return cylinderVolume;
} /* cylinderVolume */

// (6)Computes the surface area of a cylinder with base radius r and height h including the top and bottom of the cylinder //

	float total_surface_area(float r){
	float circleArea;
	float circlePerimeter;
	float totalArea = circleArea +circlePerimeter;
	return totalArea;
	}

// (7)Computes the volume of a cone with base radius r and height h formula V = π ∙ r2 ∙ h / 3//

	float volume_of_a_cone(float r, float circleArea, float h){
	float volume4cone = circleArea * h / 3;
	return volume4cone;
	}

// (8)Computes the surface area of a cone with base radius r and height h SA = πr2 + πrl//

	float surface_area_of_a_cone(float circleArea,float r,float l){
	float surface_area4_cone = circleArea + M_PI*r*l;
	return surface_area4_cone;
	}

	int main(void){

	float radius = 6.2;
	float height = 8.1;
	float area = circleArea(radius);
	float areaSphere = surface_area_of_a_sphere(radius);
	float volSphere = volume_of_a_sphere(radius);
	//float volCylinder = cylinderVolume(radius,height);
	//float cylinderArea = total_surface_area(radius,height);
	//float coneArea = surface_area_of_a_cone(area,radius,height);


	printf("Circle: 	Radius = %0.2f                                        	Area:%0.2f \n",radius,area);
	printf("Sphere: 	Radius = %0.2f                         Volume = %0.2f 	Area:%0.2f\n",radius,volSphere,areaSphere);
	//printf("Cylinder:	Radius = %0.2f                         Volume = %0.2f 	Area:%0.2f\n",radius,volCylinder,cylinderArea);
	//printf("Cone: 		Radius = %0.2f                                         Area:%0.3f\n ",radius,surface_area_of_a_cone);

	return EXIT_SUCCESS;
} /*main*/



