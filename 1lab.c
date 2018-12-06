#include <stdio.h>
#include <math.h>

int main(){
	
	float a, x, G, Y, F;
	
	// result of G
	printf("Enter a and x\n");
	scanf("%f %f",&a,&x);
	G = (3*(4*pow(a,2) + 13*a*x + 9*pow(x,2)))/(10*pow(a,2) - 51*a*x + 5*pow(x,2));
	printf("G = %f\n",G);
	
	// result of F
	printf("Enter a and x\n");
	scanf("%f %f",&a,&x);
	F = cosh(6*pow(a,2) + a*x - 2*pow(x,2));
	printf("\nF = %f\n",F); 
	
	// result of Y
	printf("Enter a and x\n");
	scanf("%f %f",&a,&x);
	Y = acos(14*pow(a,2) + 37*a*x + 5*pow(x,2) + 1);
	printf("\nY = %f\n",Y);
	
	return 0;
}

