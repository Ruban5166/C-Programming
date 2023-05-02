/*
 ============================================================================
 Name        : star.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,i,j;
	printf("enter the number:");
	fflush(stdout);
	scanf("%d",&num);
	for(i=0;i<num;i++){
		for(j = 1; j<=i;j++){
		printf("* ");
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
