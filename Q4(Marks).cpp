#include<stdio.h>
int main(){
	int  marks[100];
	int totalMarks=0,i,count=0;
	int space=sizeof(marks)/sizeof(marks[0]);
	printf("Enter Marks of Students(Enter -1 to stop) \n");
	for(i=0;i<space;i++){
		scanf("%d",&marks[i]);
		if(marks[i]==-1){
			break;
		}
		count++;
		totalMarks+=marks[i];
	}
	printf("The total Marks are : %d \n",totalMarks);
	float average=(float)totalMarks/count;
	printf("The Average of Students are : %.2f \n",average);
	return 0;
	
}
