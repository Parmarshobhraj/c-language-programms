#include <stdio.h>
int main(){
	int i,j,k;
	for(i=0;i<=5;i++)
	{
		printf("\n");
		 for (k=0;k<=5-i;k++) 
		{
			printf(" ");
		} 
		for(j=1;j<=i;j++)
		{
			printf(" *");
		 } 
		
	}
}
	
