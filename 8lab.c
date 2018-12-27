#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <omp.h>

int point_in_circle(int x, int y, float radius) {
	
	float distance;
	int point_x, point_y;
	point_x = x;
	point_y = y;
	printf("\nPoint is %d %d, Radius of the circle: %f ", point_x, point_y, radius);
	distance = sqrt(pow(point_x, 2) + pow(point_y, 2));
	if (distance <= radius) {
		printf("\nPoint belongs to the area");
		return 1;
	}
	else {
		return 0;
	}
}

int main() {

	// Creating points
	int number, i = 0;
	printf("How much points do you need? ");
	scanf("%d", &number);
	struct base_of_points {
		int x;		
		int y;
	} place[number];
	srand(time(NULL));
	for (i; i < number; i++) {
		//create_point();
		place[i].x = rand() %number;
		place[i].y = rand() %number;
		printf("%d\t %d\n", place[i].x, place[i].y);
	}
	
	// building an area 
	float radius;
	int rand_center, cx, cy;
	rand_center = rand() %number;
	cx = place[rand_center].x;
	cy = place[rand_center].y;
	printf("\nCenter is %d %d", cx, cy);
	printf("\nEnter the radius of this circle: ");
	scanf("%f", &radius);
	
	// How much time is it?
	FILE *file;
	file = fopen("time.txt", "w");
	double start, end, total_time = 0;
	int j = 0, points_in_circle = 0;
	for (j; j < number; j++) {
		start = omp_get_wtime();
		points_in_circle += point_in_circle(place[j].x, place[j].y, radius);
		end = omp_get_wtime();
		total_time += end - start;
		fprintf(file,"%d\t %lf\n", j, total_time);
	}
	fclose(file);
	printf("\nNumber of points in area: %d\n", points_in_circle);
	
	// Finding user's point
	int user_x, user_y, k = 0, answer;
	printf("\nDo you want to find number of a point? 1 - yes ");
	scanf("%d", &answer);
	if (answer == 1) {
		scanf("%d %d", &user_x, &user_y);
		for (k; k < number; k++) {
			if (user_x == place[k].x) {
				if (user_y == place[k].y) {
					printf("\nYour point is on the place %d", k);
				
				}
			}
		}
	}
	return 0;
}
