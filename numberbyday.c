/*
 ============================================================================
 Name        : numberbyday.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1;
	printf("Enter the one  Number beetween 1 to 7:");
	fflush(stdout);
	scanf("%d",&num1);

	switch(num1){
	case 1:
		printf("MONDAY");
		break;

	case 2:
		printf("TUESDAY");
		break;
	case 3:
		printf("WENESDAY");
		break;
	case 4:
		printf("THURSDAY");
		break;
	case 5:
		printf("FRIDAY");
		break;
	case 6:
		printf("SATURDAY");
		break;
	case 7:
		printf("SUNDAY");
		break;
	default :
		printf("TRY AGAIN");


	}

	return EXIT_SUCCESS;
}
