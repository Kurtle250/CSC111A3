/*
 ============================================================================
 Name        : CSC111A3P3.c
 Author      : Kurt Elliott
 Description : CSC111 Computes volume and area of cylinder,spheres,circles and cones
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//The following code will produce the volume and areas of cylinders, spheres, circles and cones.//

// (1)Computes area of a circle with radius r

	float circleArea(float r){

	return M_PI*(r*r);

	}/* circleArea */

// (2)Computes perimeter of a circle with radius r

	float circlePerimeter(float r){

	return (2*M_PI*(r));

	}/* circlePerimeter */

// (3)Computes volume of a sphere with radius r

	float volume_of_a_sphere(float r)
	{
	float volumeSphere;

	volumeSphere = (4*M_PI*(r*r*r))/3;

	return volumeSphere;

	}/* volume of a sphere */

// (4)Computes the surface area of a sphere with radius r//

	float surface_area_of_a_sphere(float r){

	return 4*(M_PI*(r*r));
	}/* surface area of sphere */

// (5)Computes volume of a cylinder with base radius r and height h//

	float cylinderVolume(float r, float h){
	float baseArea = circleArea(r);
	float cylinderVolume = h*baseArea;
	return cylinderVolume;
} /* cylinderVolume */

// (6)Computes the surface area 2 π r2 + 2 π r h of a cylinder with base radius r and height h including the top and bottom of the cylinder //

	float total_surface_area(float r, float h){
	float areaTotal = 2*circleArea(r);
	float circle_perimeter = circlePerimeter(r);
	float totalArea = (circle_perimeter * h) + areaTotal;
	return totalArea;
	}/* surface area of a cylinder */

// (7)Computes the volume of a cone with base radius r and height h formula V = π ∙ r2 ∙ h / 3//

	float volume_of_a_cone(float r, float h){
	float area = circleArea(r);
	float volume4cone = (area * h)/3;
	return volume4cone;
	}/* volume of a cone */

// (8)Computes the surface area of a cone with base radius r and height h SA = πr2 + πrl//
//l=squareroot of r*r+h*h//

	float surface_area_of_a_cone(float r,float h){
	float area = circleArea(r);
	float surface_area4_cone = area + (M_PI*r*sqrtf((r*r)+(h*h)) );
	return surface_area4_cone;
	}/* surface area of a cone */

	int main(void){

	float radius = 6.2;
	float height = 8.1;
	float area = circleArea(radius);
	float areaSphere = surface_area_of_a_sphere(radius);
	float volSphere = volume_of_a_sphere(radius);
	float totalSurfaceArea = total_surface_area(radius,height);
	float Volcylinder = cylinderVolume(radius,height);
	float surfaceAreaCone = surface_area_of_a_cone (radius,height);
	float volCone = volume_of_a_cone(radius,height);
	float sumVolumes = volSphere + Volcylinder +volCone;
	float sumArea = area + areaSphere + totalSurfaceArea + surfaceAreaCone;
	printf("Circle: 	Radius = %0.1f                                        	Area:%0.1f \n",radius,area);
	printf("Sphere: 	Radius = %0.1f                        	Volume = %0.1f 	Area:%0.1f\n",radius,volSphere,areaSphere);
	printf("Cylinder:	Radius = %0.1f  Height = %0.1f     		Volume = %0.1f 	Area:%0.1f\n",radius,height,Volcylinder,totalSurfaceArea);
	printf("Cone: 		Radius = %0.1f  Height = %0.1f        	Volume = %0.1f 	Area:%0.1f\n",radius,height,volCone,surfaceAreaCone);
	printf("Sum:                                           		Volume = %0.1f	Area:%0.1f\n",sumVolumes,sumArea);
	return EXIT_SUCCESS;
} /*main*/



