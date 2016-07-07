//Jake Johnson Summer 2016

//This program outputs an isoscoles triangle with astericks in the terminal

#include <stdio.h> //printf()
#include <string.h> //string functions
#include <stdlib.h> //atoi()

void nestedLoopUsage(int n){

	//nested loop that prints 'i' amount of astericks per line
	for(int i = 0; i < n; i++){
		for(int j = 0; j < i+1; j++){
			printf("*");
		}
		printf("\n");
	}
}

void mallocUsage(int n){

	//create dynamically allocated array for a string
	char* astericks = (char*)malloc( n * sizeof(char) );
	astericks[0] = 0;

	//go through rows printing out the string and adding a star to the string for each row
	for(int i = 0; i < n; i++){
		strcat(astericks,"*");
		printf("%s\n",astericks);
	}
	
	//don't use this method because it doesn't know the size of array until run-time
	//and it compiles before run time
	/*
	char astericks[n];

	for(int i = 0; i < n; i++){
		strcat(astericks,"*");
		printf("%s\n",astericks);

	}
	*/
}

int main( int argc, char ** argv){

	//get n from first argument and convert it to int
	int n = atoi(argv[1]);

	//both of these methods work, uncomment one to see it run!
	//nestedLoopUsage(n);
	//mallocUsage(n);

}