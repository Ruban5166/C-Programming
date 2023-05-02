/*
 ============================================================================
 Name        : total.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int marks;
	printf("Enter the total marks:");
	fflush(stdout);
	scanf("%d",&marks);
	if(marks > 90){
		printf("Your grade is A");
	}else if(marks >=80){
		printf("Your grade is B");
	}else if(marks >=70){
		printf("your grade is C");

	}else if(marks >=60){
		printf("Your grade is D");

	}else if (marks >= 50){
		printf("Your grade is E");
	}
	else{
		printf("Faild try again next exam");
	}

	return EXIT_SUCCESS;
}
