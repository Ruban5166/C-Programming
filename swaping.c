/*
 ============================================================================
 Name        : swaping.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2,temp;
	printf("enter the two numbers:");
	scanf("%f %f",&num1,&num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("Number one is :%f",num1);
	printf("Number two is :%f",num2);
	return EXIT_SUCCESS;
}
