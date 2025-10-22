/*
NAMEBONIFACE NJOROGE
REG. NO.CT100/G/26205/25
*/
//Simple program to show exam elligibility
#include <stdio.h>

int main(){
	int attendance;
	float marks;
	printf("Enter your exam percentsge :");
	scanf("%f", &marks);
	printf("Enter your exam attendance :");
	scanf("%d", &attendance);
	if(attendance >= 75 && marks > 40){
		printf("Eligible to do exams");
	}else{
		printf("Not Eligible");
	}
	return 0;
}