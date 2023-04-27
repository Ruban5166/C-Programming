/*
 ============================================================================
 Name        : input.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("You have entered:%d",num);

	return EXIT_SUCCESS;
}
