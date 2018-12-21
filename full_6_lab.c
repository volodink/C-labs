#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

struct array_of_structures {
	float array[100];
} base[5];
// base[0] - a, base[1] - x, base[2] - G, base[3] - F, base[4] - Y.

int main() {
	
int iterations, i = 0, k = 0 , ran_a1, ran_a2, ran_x1, ran_x2, answer, amount_of_shablons = 0;
float a, x, G, Y, F, min_a, min_x, max_a, max_x, shablon ;
char str_a[20], str_x[20], stroka[255], result[1024];

printf("Give a shablon to find it in results ");
scanf("%f", &shablon);
printf("How much operations this program should to do?\n");
scanf("%s", &stroka);
iterations = atoi(stroka);
	
for (i; i < iterations; i++) {
		
	printf("\nGive a range to 'a', that it can't across:\n");
	scanf("%d %d", &ran_a1, &ran_a2);
	printf("\nEnter 'a'\n");
	scanf("%s",&str_a);
	a = atof(str_a);
	base[0].array[i] = a;
	if (a < ran_a1 || a > ran_a2) {
		printf("\nYou entered the range of 'a' between %d and %d. \n'a' can't be used in this range!\n", ran_a1, ran_a2);
		continue;
	}
	printf("\nGive a range to 'x', that it can't across:\n");
	scanf("%d %d", &ran_x1, &ran_x2);
	printf("\nEnter 'x'\n");
	scanf("%s",&str_x);
	x = atof(str_x);
	base[1].array[i] = x;
	if (x < ran_x1 || x > ran_x2) {
		printf("\nYou entered the range of 'x' between %d and %d. \n'x' can't be used in this range!\n", ran_x1, ran_x2);
		continue;
	}
	// G
	if (a==0 && x==0) {
		printf("\nIn function G: Can't divine on zero.\nDo not enter 0 and 0\n");
		continue;
	}
	else {
		G = (3*(4*pow(a,2) + 13*a*x + 9*pow(x,2)))/(10*pow(a,2) - 51*a*x + 5*pow(x,2));
		if (G == shablon) {
			amount_of_shablons++;
		}
		base[2].array[i] = G;
		sprintf(stroka, "%.2f\t", base[2].array[i]);
		strcat(result, stroka);
		printf("\n=========\nG = %f", G);
	}
	// F
	if ((-4<a<4) && (-4<x<4)) {
		F = cosh(6*pow(a,2) + a*x - 2*pow(x,2));
		if (F == shablon) {
			amount_of_shablons++;
		}
		base[3].array[i] = F;
		sprintf(stroka, "%.2f\t", base[3].array[i]);
		strcat(result, stroka);
		printf("\nF = %f", F); 
	}
	else {
		printf("\nResult is too big.Error: 1#INF00 \nDo not enter any number that more than 4 and less than -4\n");
		continue;
	}
	// Y
	if (a!=0 && x!=0) {
		printf("\nImpossible to count Y. Error: -1#IND00. Enter 0 and 0 to get possible result\n========");
		continue;
	}	
	else {
		Y = acos(14*pow(a,2) + 37*a*x + 5*pow(x,2) + 1);
		if (Y == shablon) {
			amount_of_shablons++;
		}
		base[4].array[i] = Y;
		sprintf(stroka, "%.2f\t", base[4].array[i]);
		strcat(result, stroka);
		printf("\nY = %f\n========", Y);
	}
	// breaking the calculations
	printf("\nDo you want to stop the calculations? (write '1' to stop)\n");
	scanf("%d",&answer);
	if (answer == 1) {
		printf("\n You answered '1'. Stopping the calculations...zzzz");
		break;
	}	
	
}	
min_a = base[0].array[0];
min_x = base[1].array[0];
for (k; k < iterations; k++) {
	printf("\na[%d] is %f", k, base[0].array[k]);
	printf("\nx[%d] is %f", k, base[1].array[k]);
	if (base[0].array[k] > max_a){
		max_a = base[0].array[k];
	}
	if (base[1].array[k] > max_x){
		max_x = base[1].array[k];
	}
	if (base[0].array[k] < min_a) {
		min_a = base[0].array[k];
	}
	if (base[1].array[k] < min_x) {
		min_x = base[1].array[k];
	}
}
printf("\nMin of 'a' is %f, max of 'a' is %f \nMin of 'x' is %f, max of 'x' is %f", min_a, max_a, min_x, max_x);
printf("\nResult = %s\n",result);
if (amount_of_shablons > 0) {
	printf("Where %d shablons\n========\n", amount_of_shablons);
}
else {
	printf("No shablons\n========\n");
}
return 0;
}
