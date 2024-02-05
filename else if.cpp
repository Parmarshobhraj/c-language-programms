#include <stdio.h>

int main(){
	double b;
	
	printf("Enter Your Age to check your Eligibility :");
	scanf("%lf" , &b);
	printf("User Age :  %.0lf\n", b);
	
	if(b < 18){
		printf("You are not Eligible for Licence");
	}
	else if (b == 18){
		printf("You are eligible for Learning Licence ");
	}
	else if (b > 18){
		printf("You are eligible for licence");
	}
	else{
		printf("You are not eligible for licence");
	}
}
