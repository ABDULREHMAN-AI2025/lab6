#include<stdio.h>
int main()
{
	int product=1;
	int n,i;
	printf("Enter the value for factorial \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		product*=i;
	}
	printf("THE FACTORIAL OF %d is %d \n",n,product);
return 0;
}
