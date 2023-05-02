/*
 ============================================================================
 Name        : prime.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,i,flag = 0;
	printf("Enter the number:");
	fflush(stdout);
	scanf("%d",&num);
	for(i=2; i<num; i++){
		if(num%i==0){
			flag =1;
			break;
		}
	}
	if(flag==0){
		printf("%d IS PRIME NUMBER ",num);

	}else{
		printf("%d IS NOT PRIME NUMBER ",num);
	}
	return EXIT_SUCCESS;
}
