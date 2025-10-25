#include <stdio.h>

int factorial(int n);
int main() {
	int n,i;
	printf("Enter the vale of nth number for Catalan number Series \n");
	scanf("%d",&n);
	int catalanNumber[n];
	for(i=0;i<n;i++){
		catalanNumber[i]=factorial(2*i)/(factorial(i+1)*factorial(i));
	}
	for(i=0;i<n;i++){
		printf("%5d",catalanNumber[i]);
	}
	return 0;
}
int factorial(int n){
	int product=1;
	for(int i=n;i>1;i--){
		product*=i;		
	}
	return product;
}
