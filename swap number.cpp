#include<stdio.h>
int main(){
	int a=7,b=3;
	printf("before swap num:a=%d\tb=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap num:a=%d\tb=%d",a,b);
}

