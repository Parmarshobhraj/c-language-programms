#include<stdio.h>
int main(){
   int a=6,b=5,c;
   printf("before  swap num:a=%d \t b=%d\n",a,b);
   c=a;
   a=b;
   b=c;
   printf("after swap num:a=%d \t b=%d",a,b);
}
