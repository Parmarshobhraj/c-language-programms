#include<stdio.h>
int main(){
	int i,j,a;
	printf("Enter value:");
	scanf("%d",&a);
	for(i=0;i<=a;i++){
		printf("\n",i);
		
    for(j=0;j<=a-i;j++){
		printf(" *",j);}
		}
}
