/*
 ============================================================================
 Name        : oddnumbersun.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,i,sum = 0;
	printf("Enter the number:");
	fflush(stdout);
	scanf("%d",&num);
	for(i=1;i<=num ;i++){
	if(i%2==1){
		sum =sum+i;
	}
	}
	printf("total is = %d",sum);

	return EXIT_SUCCESS;
}
