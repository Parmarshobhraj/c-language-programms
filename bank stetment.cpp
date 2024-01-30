#include<stdio.h>
int main(){
	char a[10];
	printf("Account Holder Name:");
	scanf("%s",&a);
	printf("%s\n",a);
	
	double b;
	printf("Account Number:");
	scanf("%lf",&b);
	printf("%.0lf\n",b);
	
	double c,d,e;
	printf("credit Ammount:");
	scanf("%lf",&c);
	printf("%.0lf\n",c);
	
	printf("withdraw Ammount:");
	scanf("%lf",&d);
	printf("%.0lf\n",d);
	
	printf("total Ammount:");
	e=c-d;
	printf("%.0lf\n",e);
	

}
