#include<stdio.h>
int main(){
	int marks[100];
	int i;
	int n;
	int sum=0;
	int average;
	printf("enter the number of students\n");
	printf("Note : the number of students cannot exceed more than 100\n");

	scanf("%d",&n);
  for(i=0;i<n+1;i++){
		scanf("%d",&marks[i]);

	}
	for(i=0;i<n+1;i++){
	sum+=marks[i];
}
average=sum/n;
printf("the average of the class is %d .",average);


	}
