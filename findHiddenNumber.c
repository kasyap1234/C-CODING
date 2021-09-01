#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n); 
int a[1000]; 
    
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]); 
    }
    // adding all the numbers of the array 
    long sum=0; 
    for(int i=0;i<n;i++){
    sum+=a[i]; 
    }
// dividing the sum by n and storing it in a variable 
    long var=sum/n; 
    // if var is equal to sum 
    if(var*n==sum){
    printf("%ld",var); 
    }
    // else 
    else{
    printf("-1"); 
    }
    
    
