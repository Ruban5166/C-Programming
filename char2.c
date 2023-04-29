/*
 ============================================================================
 Name        : char2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name;
	printf("Enter name with surname:");
	fflush(stdout);
	scanf("%c",&name);
	printf("your name is: %c",name);
	return EXIT_SUCCESS;
}
