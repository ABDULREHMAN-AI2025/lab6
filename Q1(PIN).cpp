#include<stdio.h>
int main(){
	int pin,sum=0,digit;
	printf("Enter a 4 digit pin \n ");
	scanf("%d",&pin);
	while(pin>0){
		digit=pin%10; //get the last digit 
		sum+=digit;
		pin=pin/10; //remove the digit
	}
	if(sum>10){
		printf("Entered PIN is Strong (sum = %d) \n",sum);
	}else{
		printf("Entered PIN is WEAK (sum = %d) \n",sum);
	}
	return 0;
}
