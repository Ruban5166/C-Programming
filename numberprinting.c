/*
 ============================================================================
 Name        : numberprinting.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,i;
	printf("enter the number to print:");
	fflush(stdout);
	scanf("%d",&number);
	for (i=1; i<=number; i++){
	printf("%d\n",i);
	}
	return EXIT_SUCCESS;
}
