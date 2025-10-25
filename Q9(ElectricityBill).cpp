#include <stdio.h>

int main() {
    int number, digit, even = 0, odd = 0;
    printf("Enter meter reading number: ");
    scanf("%d", &number);
    while(number>0){
    	digit=number %10;
    	if(digit%2==0){
    		even++;
		}else{
			odd++;
		}
		number=number/10;
	}
	 printf("Even digits: %d\n", even);
    printf("Odd digits: %d\n", odd);
    return 0;
}
    
