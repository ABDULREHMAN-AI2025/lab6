#include<stdio.h>
int main(){
	int num,rev=0,digit;
	printf("Enter the ticket number  \n ");
	scanf("%d",&num);
	while(num>0){
		digit=num%10; //get the last digit 
		rev=rev*10+digit;
		num=num/10; //remove the digit
	}
	printf("The reversed ticket number is %d \n",rev);
	
	return 0;
}
