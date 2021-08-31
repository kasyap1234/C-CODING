#include<stdio.h>
#include<stdlib.h>

long solution(int *A,int N)
{
    int sum=0; 
    // variable A is the pointer to the base address of the array . 
    
  // traversing all the elements and adding their values into a variable sum and dereferencing the pointer  
    for(int i=0;i<N;i++){
        sum+=*(A +i); 
        
    }
return sum; 

	//write your code here

}

int main()
{
    int *A,N,i;
    scanf("%d",&N);
    A = (int*) malloc(N * sizeof(int));
    for(i=0; i<N; i++)
        scanf("%d",&A[i]);
    printf("%ld",solution(A,N)); 
}
