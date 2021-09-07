#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N1,*RN,N2,*PS,*A;
    int i;
    
    scanf("%d",&N1);
    RN = (int *) malloc(sizeof(int)*N1);
    A = (int *) malloc(sizeof(int)*N1);
    for(i = 0; i < N1; i++){
        scanf("%d",&RN[i]);
    }    
    scanf("%d",&N2);
    PS = (int *) malloc(sizeof(int)*N2);
    for(i = 0; i < N2; i++){
        scanf("%d",&PS[i]);
    }
int cmpfunc (const void * a, const void * b){
   return ( *(int*)a - *(int*)b );
}
     qsort(RN, N1, sizeof(int), cmpfunc);
    qsort(PS, N2, sizeof(int), cmpfunc);
    for(int i=0;i<N2;i++){for(int j=i;j<N1;j++){
    if(PS[i]==RN[j]){
    A[j]=1; }
        
    }
                         }
    

    
	//write your code here

    printf("%d",A[0]);
    for(i = 1; i < N1; i++){
        printf(" %d",A[i]);
    }
    return 0;
}
