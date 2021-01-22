#include<stdio.h>
#include"header.h"
#include"add.c"
#include"sub.c"

int main(){
	int a,b,sum=0;
	char choice=0;
	printf("Enter 2 number: \n");	
	scanf("%d%d",&a,&b);
	fflush(stdin);
	printf("Which operation you want to do: "\n);
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Divison\n");
	printf("Enter the choice: "\n);
	scanf("%d",&choice);
	switch(choice){
		case(1):
			sum = add(a,b);	
			printf("Sum is: %d\n",sum);
			break;
		case(2):
			sum = sub(a,b);	
			printf("Sum is: %d\n",sum);
			break;
	/*	case(3):
			sum = mul(a,b);	
			printf("Sum is: %d\n",sum);
			break;
		case(4):
			sum = div(a,b);	
			printf("Sum is: %d\n",sum);
			break; 	*/
		default:
			printf("You entered a invalid choice");
	}
	
	return 0;
}
