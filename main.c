#include<stdio.h>
#include"header.h"

int main(){
	int a,b,sum=0;
	printf("Enter 2 number: ");
	scanf("%d%d",&a,&b);
	sum = add(a,b);	
	printf("Sum is: %d\n",sum);
	return 0;
}
