/*
 ============================================================================
 Name        : two.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1, num2,sum;
	printf("Enter the two numbers:");
	/* fflush(stdin);*/
	scanf("%f %f",&num1 , &num2);
	sum =num1 + num2;
	printf("the total is :%f",sum);


	return EXIT_SUCCESS;
}
