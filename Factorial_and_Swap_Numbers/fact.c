#include <stdio.h>

int factorial(int input){
	if(input == 0) return 0;
	else if(input == 1) return 1;
	return input * factorial(input-1);	
}

int main(){
	int input;
	printf("Enter number: ");
	scanf("%d", &input);
	int fact = factorial(input);	
	printf("The factorial is %d\n", fact);
	return(0);
}
