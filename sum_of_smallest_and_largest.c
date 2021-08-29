#include<stdio.h>
int solution(int *A, int N)
{
  int min=2147483647 ; 
    
    
    int max=-2147483648; 
    int sum; 
    for(int i=0;i<N;i++){
    if(A[i]>max){
    max=A[i]; 
    }
    }
    for(int i=0;i<N;i++){
    if(A[i]<min){
    min=A[i]; 
    }
    }
  sum=min + max; 
    
return sum;
    
    
}


int main()
{
	int N, i;
	scanf("%d", &N);
	int A[N];
	for(i=0; i<N; i++) {
		scanf("%d", &A[i]);
	}
	printf("%d", solution(A, N));
	return 0;
}
