/*
 ============================================================================
 Name        : multiplication.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num , i,multi;
	printf("Enter the number:");
	fflush(stdout);
	scanf("%d",&num);
	for(i=1; i<=10;i++){
		multi = num * i;
		printf("%d x %d = %d",i , num ,multi);
		printf("\n");
	}



	return EXIT_SUCCESS;
}
