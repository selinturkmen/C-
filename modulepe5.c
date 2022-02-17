#include "modulepe5.h"
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

float RandomGenerator(int a, int b){
	int a, b, n;
	printf("Enter the value of n, min, max:\n");
	scanf("%d %d %d", &n, &a, &b);
	int x[n];
	for (int i = 0; i<n; i++){
		srand(time(0));
		x[i]=(rand() %(b-a +1)) +a;
		
		}
	return x;
}
