#include <stdio.h>
int main() {
	
	char strnum[50];
	int counter = 0;
	int numbers[50];
	int even = 0;
	printf("Give me a number\n");
	scanf("%c", &strnum);
	for (counter; counter < 50; counter++) {
		if (strnum[counter] == '.') {
			printf("\nYou entered a float number. Please don't do it\n Result is: %d", 0);
			return 0;
		}
	}
	counter = 0;
	for (counter; counter < 50; counter++) {
		numbers[counter] = atoi(strnum[counter]);
		if (numbers[counter] % 2 == 0) {
			even++;
		}
	}
	printf("\nEven numbers are: %d", even);
	return 0;
}
