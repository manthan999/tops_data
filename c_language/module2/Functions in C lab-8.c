#include<stdio.h>
int main(){
	float celsius,fahrenheit;
	
	printf("enter the value of celsius:");
	scanf("%f",&celsius);
	
	fahrenheit=(celsius*9/5)+32;
	printf("\n fahrenheit=%f",fahrenheit);
}
