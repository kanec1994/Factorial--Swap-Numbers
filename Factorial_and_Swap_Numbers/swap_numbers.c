#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;	
}

int main(){
	int a, b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Before swap a = %d, b = %d\n", a, b);
	swap(&a,&b);
	printf("After swap a = %d, b = %d\n", a, b);
	return(0);
}