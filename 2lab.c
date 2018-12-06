#include <stdio.h>
#include <math.h>

int main(){
	
	int number;
	float a, x, G, Y, F;
	printf("1 is G, 2 is F, 3 is Y\n");
	printf("Enter a number to choose program\n");
	scanf("%d", &number);
	switch (number) {
	
	case 1:
		// result of G
		printf("\nEnter a and x\n");
		scanf("%f %f",&a,&x);
		if (a==0 && x==0) {
			printf("\nCan't divine on zero.\nDo not enter 0 and 0\n");
		}
		else{
			G = (3*(4*pow(a,2) + 13*a*x + 9*pow(x,2)))/(10*pow(a,2) - 51*a*x + 5*pow(x,2));
			printf("G = %f\n",G);
		}
		break;
	
	case 2:
		// result of F
		printf("Enter a and x\n");
		scanf("%f %f",&a,&x);
		if ((-4<a<4) && (-4<x<4)) {
			F = cosh(6*pow(a,2) + a*x - 2*pow(x,2));
			printf("\nF = %f\n",F); 
		}
		else{
			printf("\nResult is too big.Error: 1#INF00 \nDo not enter any number that more than 4 and less than -4\n");
		}
		break;
	
	case 3:
		// result of Y
		printf("Enter a and x\n");
		scanf("%f %f",&a,&x);
		if (a!=0 && x!=0) {
			printf("\nImpossible to count. Error: -1#IND00\n Enter 0 and 0 to get possible result");
		}	
		else {
			Y = acos(14*pow(a,2) + 37*a*x + 5*pow(x,2) + 1);
			printf("\nY = %f\n",Y);
		}
		break;
	
	default:
		// fake path
		printf("\nCan't find instruction to do");
		break;
	}
	return 0;
}

