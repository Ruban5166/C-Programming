/*
 ============================================================================
 Name        : simple.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float pamount,interst,years,simpleinterst;
	puts("SIMPLE INTERST");
	printf("Enter the Principal amount ");
	scanf("%f",&pamount);
	printf("Enter the Interest rate:");
	scanf("%f",&interst);
	printf("Enter the number of years:");
	scanf("%f",&years);
	simpleinterst = (pamount*interst*years)/100;
	printf("Interst is:%f",simpleinterst);
	return EXIT_SUCCESS;
}
