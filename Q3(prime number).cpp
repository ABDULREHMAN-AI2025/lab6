#include<stdio.h>
int main(){
	int num,not_prime=0,i;
	printf("Enter Student id number \n");
	scanf("%d",&num);
		if(num==0){
			printf("invalid number \n");
			return 0;
		}else{
		for(i=2;i<num;i++){
	
			if(num%i==0 && num!=2){
			not_prime=1;
			break;
			}else{
				not_prime=0;
			}
		}if(not_prime){
			printf("the id number %d is not a prime number \n",num);
		}else{
			printf("the id number %d is  a prime number \n",num);
		}
	}
	printf("THE PRIME NUMBER BETWEEN 1-n : \n");
	for(i=2;i<=num;i++)
	{
		not_prime=1; //to reset the number
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				not_prime=0;
			}
		}
		if(not_prime){
			printf("%d \n",i);
		}
	}
	return 0;
}
