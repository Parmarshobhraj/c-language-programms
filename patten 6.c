#include<stdio.h>
int main(){
	int i,j,k;
	
	for(i=0;i<5;i++){
		
    for(j=0;j<2*i;j++){
		printf("",j);
		}
	 for(k=0;k<5-i;k++){
		printf("* ",k);
		}
		printf("\n");
}
}
