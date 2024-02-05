#include<stdio.h>
int main()
{
	int vowels;
	printf("Enter value:");
	scanf("%d",&vowels);
	
	switch (vowels) {
		case 0:;
		printf("a");
		break;
		
		case 1:;
		printf("e");
		break;
		
		case 2:;
		printf("i");
		break;
		
		case 3:;
		printf("o");
		break;
		
		case 4:;
		printf("u");
		break;
		
		default :
		 	printf("this character is consonant");
		 	break;
		 	
		 }
	}
