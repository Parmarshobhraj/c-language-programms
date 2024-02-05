#include <stdio.h>

int main(){
	double a;
	
	printf("Enter Your Age to check your Eligibility :");
	scanf("%lf" , &a);
	printf("User Age :  %.0lf\n", a);
	
	if(a >= 18){
		
			if(a > 18){
				printf("You are  Eligible for  Licence");
						  }
			else {
				printf("You are Eligible for learning Licence !");
					   }
	}
		else{
		printf("you are not Eligible for  Licence");
		}

	

}

