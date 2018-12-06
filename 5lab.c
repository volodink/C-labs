#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	
	int num_of_program;
	float a, x, G, Y, F;
	char bad_a[50];
	char bad_x[50];
	a = atoi(bad_a);
	x = atoi(bad_x);
	int ran_a1, ran_a2;
	int ran_x1, ran_x2;
	int answer;
	char iters[200];
	int num_of_iterations;
	num_of_iterations = atoi(iters);
	int i = 0;
	float array_a[100];
	float array_x[100];
	int j = 0; 
	float result[100];
	char array_of_results[100];
	float min_a, min_x, max_a, max_x;
	int k = 0; 
	
	printf("How much operations this program should to do?\n");
	scanf("%d", &num_of_iterations);
	for (i; i < num_of_iterations; i++) {
	
		printf("1 is G, 2 is F, 3 is Y\n");
		printf("Enter a number to choose program\n");
		scanf("%d", &num_of_program);
		switch (num_of_program) {
		case 1:
			// G
	
			printf("\nGive a range to 'a', that it can't across:\n");
			scanf("%d %d", &ran_a1, &ran_a2);
			printf("\nEnter 'a'\n");
			scanf("%f",&a);
			array_a[i] = a;
			if (a < ran_a1 || a > ran_a2) {
				printf("\nYou entered the range of 'a' between %d and %d. \n'a' can't be used in this range!\n", ran_a1, ran_a2);
				continue;
			}
			printf("\nGive a range to 'x', that it can't across:\n");
			scanf("%d %d", &ran_x1, &ran_x2);
			printf("\nEnter 'x'\n");
			scanf("%f",&x);
			array_x[i] = x;
			if (x < ran_x1 || x > ran_x2) {
				printf("\nYou entered the range of 'x' between %d and %d. \n'x' can't be used in this range!\n", ran_x1, ran_x2);
				continue;
			}
			if (a==0 && x==0) {
				printf("\nCan't divine on zero.\nDo not enter 0 and 0\n");
				continue;
			}
			else{
				G = (3*(4*pow(a,2) + 13*a*x + 9*pow(x,2)))/(10*pow(a,2) - 51*a*x + 5*pow(x,2));
				printf("G = %f\n",G);
				result[i] = G;
				printf("\nDo you want to stop the calculations? (1/0)\n");
				scanf("%d",&answer);
				if (answer == 1) {
					printf("\n You answered '1'. Stopping the calculations...zzzz\n");
					goto end;
				}
				else {
					continue;
				}
			}
			break;
		case 2:
			//F
			
			printf("\nGive a range to 'a', that it can't across:\n");
			scanf("%d %d", &ran_a1, &ran_a2);
			printf("\nEnter 'a'\n");
			scanf("%f",&a);
			array_a[i] = a;
			if (a < ran_a1 || a > ran_a2) {
				printf("\nYou entered the range of 'a' between %d and %d. \n'a' can't be used in this range!\n", ran_a1, ran_a2);
				continue;
			}
			printf("\nGive a range to 'x', that it can't across:\n");
			scanf("%d %d", &ran_x1, &ran_x2);
			printf("\nEnter 'x'\n");
			scanf("%f",&x);
			array_x[i] = x;
			if (x < ran_x1 || x > ran_x2) {
				printf("\nYou entered the range of 'x' between %d and %d. \n'x' can't be used in this range!\n", ran_x1, ran_x2);
				continue;
			}
			if ((-4<a<4) && (-4<x<4)) {
				F = cosh(6*pow(a,2) + a*x - 2*pow(x,2));
				printf("\nF = %f\n",F);
				result[i] = F; 
				printf("\nDo you want to stop the calculations? (1/0)\n");
				scanf("%d",&answer);
				if (answer == 1) {
					printf("\n You answered '1'. Stopping the calculations...zzzz");
					goto end;
				}
				else {
					continue;
				}
			}
			else{
				printf("\nResult is too big.Error: 1#INF00 \nDo not enter any number that more than 4 and less than -4\n");
				continue;
			}
			break;
		case 3:
			//Y
			
			printf("\nGive a range to 'a', that it can't across:\n");
			scanf("%d %d", &ran_a1, &ran_a2);
			printf("\nEnter 'a'\n");
			scanf("%f",&a);
			array_a[i] = a;
			if (a < ran_a1 || a > ran_a2) {
				printf("\nYou entered the range of 'a' between %d and %d. \n'a' can't be used in this range!\n", ran_a1, ran_a2);
				continue;
			}
			printf("\nGive a range to 'x', that it can't across:\n");
			scanf("%d %d", &ran_x1, &ran_x2);
			printf("\nEnter 'x'\n");
			scanf("%f",&x);
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
				printf("\nY = %f\n",Y);
				result[i] = Y;
				printf("\nDo you want to stop the calculations? (1/0)\n");
				scanf("%d",&answer);
				if (answer == 1) {
					printf("\n You answered '1'. Stopping the calculations...zzzz");
					goto end;
				}
				else {
					continue;
				}
			}
			break;
		default:
		    printf("\nCan't find instruction to do");
		    continue;
		}
	}
end:
	for (j; j < num_of_iterations; j++) {
		printf("\n a[%d] is %f", j, array_a[j]);
		printf("\n x[%d] is %f", j, array_x[j]);
	}
	j = 0;
	printf("\n Num of iterations: %d", num_of_iterations);
	for (j; j < num_of_iterations; j++) {
		itoa(result[j], array_of_results[j],10);
	}
	printf("\n Results: %s", array_of_results);
	for (k; k < num_of_iterations; k++) {
		if (array_a[k] > max_a){
			max_a = array_a[k];
		}
		if (array_a[k] < min_a) {
			min_a = array_a[k];
		}
	}
	printf("\nMin of 'a' is %f, max of 'a' is %f", min_a, max_a);
	
	
	k = 0;
	for (k; k < num_of_iterations; k++) {
		if (array_x[k] > max_x){
			max_x = array_x[k];
		}
		if (array_x[k] < min_x) {
			min_x = array_x[k];
		}
	}
	printf("\nMin of 'x' is %f, max of 'x' is %f", min_x, max_x);
	printf("\nThe end");
	return 0;
}
