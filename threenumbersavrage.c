/*
 ============================================================================
 Name        : threenumbersavrage.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2,num3,avarge;
	printf("Enter the three numbers:");
	scanf("%f %f %f",&num1,&num2,&num3);
	avarge = (num1+num2+num3)/3;
	printf("Average is:%f",avarge);

	return EXIT_SUCCESS;
}
