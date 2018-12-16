#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main() {
	
int num_of_program, iterations, i = 0, k = 0 , ran_a1, ran_a2, ran_x1, ran_x2, answer, amount_of_shablons = 0;
float a, x, G, Y, F, min_a, min_x, max_a, max_x, array_a[100], array_x[100], array_G[100], array_F[100], array_Y[100], shablon;
char str_a[20], str_x[20], stroka[255], result[1024];

printf("Give a shablon ");
scanf("%f", &shablon);
printf("How much operations this program should to do?\n");
scanf("%s", &stroka);
iterations = atoi(stroka);
	
for (i; i < iterations; i++) {
	
	printf("1 is G, 2 is F, 3 is Y\n Enter a number to choose program\n");
	scanf("%d", &num_of_program);
	if (num_of_program == 1) {
			
		printf("\nGive a range to 'a', that it can't across:\n");
		scanf("%d %d", &ran_a1, &ran_a2);
		printf("\nEnter 'a'\n");
		scanf("%s",&str_a);
		a = atof(str_a);
		array_a[i] = a;
		if (a < ran_a1 || a > ran_a2) {
			printf("\nYou entered the range of 'a' between %d and %d. \n'a' can't be used in this range!\n", ran_a1, ran_a2);
			continue;
		}
		printf("\nGive a range to 'x', that it can't across:\n");
		scanf("%d %d", &ran_x1, &ran_x2);
		printf("\nEnter 'x'\n");
		scanf("%s",&str_x);
		x = atof(str_x);
		array_x[i] = x;
		if (x < ran_x1 || x > ran_x2) {
			printf("\nYou entered the range of 'x' between %d and %d. \n'x' can't be used in this range!\n", ran_x1, ran_x2);
			continue;
		}
		if (a==0 && x==0) {
			printf("\nCan't divine on zero.\nDo not enter 0 and 0\n");
			continue;
		}
		else {
			G = (3*(4*pow(a,2) + 13*a*x + 9*pow(x,2)))/(10*pow(a,2) - 51*a*x + 5*pow(x,2));
			if (G == shablon) {
				amount_of_shablons++;
			}
			array_G[iterations] = G;
			sprintf(stroka, "%.2f\t", array_G[iterations]);
			strcat(result, stroka);
			printf("G = %f\nDo you want to stop the calculations? (write '1' to stop)\n",G);
			scanf("%d",&answer);
			if (answer == 1) {
				printf("\n You answered '1'. Stopping the calculations...zzzz\n");
				break;
			}
			else {
				continue;
			}
		}
	}
	else if (num_of_program == 2) {
		
		printf("\nGive a range to 'a', that it can't across:\n");
		scanf("%d %d", &ran_a1, &ran_a2);
		printf("\nEnter 'a'\n");
		scanf("%s",&str_a);
		a = atof(str_a);
		array_a[i] = a;
		if (a < ran_a1 || a > ran_a2) {
			printf("\nYou entered the range of 'a' between %d and %d. \n'a' can't be used in this range!\n", ran_a1, ran_a2);
			continue;
		}
		printf("\nGive a range to 'x', that it can't across:\n");
		scanf("%d %d", &ran_x1, &ran_x2);
		printf("\nEnter 'x'\n");
		scanf("%s",&str_x);
		x = atof(str_x);
		array_x[i] = x;
		if (x < ran_x1 || x > ran_x2) {
			printf("\nYou entered the range of 'x' between %d and %d. \n'x' can't be used in this range!\n", ran_x1, ran_x2);
			continue;
		}
		if ((-4<a<4) && (-4<x<4)) {
			F = cosh(6*pow(a,2) + a*x - 2*pow(x,2));
			if (F == shablon) {
				amount_of_shablons++;
			}
			array_F[iterations] = F;
			sprintf(stroka, "%.2f\t", array_F[iterations]);
			strcat(result, stroka);
			printf("\nF = %f\nDo you want to stop the calculations? (write '1' to stop)\n",F); 
			scanf("%d",&answer);
			if (answer == 'y') {
				printf("\n You answered '1'. Stopping the calculations...zzzz");
				break;
			}
			else {
				continue;
			}
		}
		else{
			printf("\nResult is too big.Error: 1#INF00 \nDo not enter any number that more than 4 and less than -4\n");
			continue;
		}
	}
	else if (num_of_program == 3) {
			
		printf("\nGive a range to 'a', that it can't across:\n");
		scanf("%d %d", &ran_a1, &ran_a2);
		printf("\nEnter 'a'\n");
		scanf("%s",&str_a);
		a = atof(str_a);
		array_a[i] = a;
		if (a < ran_a1 || a > ran_a2) {
			printf("\nYou entered the range of 'a' between %d and %d. \n'a' can't be used in this range!\n", ran_a1, ran_a2);
			continue;
		}
		printf("\nGive a range to 'x', that it can't across:\n");
		scanf("%d %d", &ran_x1, &ran_x2);
		printf("\nEnter 'x'\n");
		scanf("%s",&str_x);
		x = atof(str_x);
		array_x[i] = x;
		if (x < ran_x1 || x > ran_x2) {
			printf("\nYou entered the range of 'x' between %d and %d. \n'x' can't be used in this range!\n", ran_x1, ran_x2);
			continue;
		}
		if (a!=0 && x!=0) {
			printf("\nImpossible to count. Error: -1#IND00\n Enter 0 and 0 to get possible result");
			continue;
		}	
		else {
			Y = acos(14*pow(a,2) + 37*a*x + 5*pow(x,2) + 1);
			if (Y == shablon) {
				amount_of_shablons++;
			}
			array_Y[iterations] = Y;
			sprintf(stroka, "%.2f\t", array_Y[iterations]);
			strcat(result, stroka);
			printf("\nY = %f\nDo you want to stop the calculations? (write '1' to stop)\n",Y);
			scanf("%d",&answer);
			if (answer == 'y') {
				printf("\n You answered '1'. Stopping the calculations...zzzz");
				break;
			}
			else {
				continue;
			}
		}
	}
	else {
		printf("\nCan't find instruction to do");
		continue;
	}
}
	//results	
	min_a = array_a[0];
	min_x = array_x[0];
	for (k; k < iterations; k++) {
		printf("\n a[%d] is %f", k, array_a[k]);
		printf("\n x[%d] is %f", k, array_x[k]);
		if (array_a[k] > max_a){
			max_a = array_a[k];
		}
		if (array_x[k] > max_x){
			max_x = array_x[k];
		}
		if (array_a[k] < min_a) {
			min_a = array_a[k];
		}
		if (array_x[k] < min_x) {
			min_x = array_x[k];
		}
	}
	printf("\nMin of 'a' is %f, max of 'a' is %f \nMin of 'x' is %f, max of 'x' is %f", min_a, max_a, min_x, max_x);
	printf("\nResult = %s\n",result);
	if (amount_of_shablons > 0) {
		printf("Where %d shablons\n", amount_of_shablons);
	}
	else {
		printf("No shablons\n");
	}
	return 0;
}
