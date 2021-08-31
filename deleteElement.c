#include<stdio.h>
int main()
{
    int n; 
    // number of elements in array ; 
    
    scanf("%d",&n); 
    // initialise the array 
    int a[n]; 
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]); 
    }
    int k; 
    scanf("%d",&k); 
    // shifting elements to the left by one step  from k to n; 
    
    for(int i=k;i<n;i++){
   a[i]=a[i+1]; 
    }
    // reducing the size of the array . 
    
    n=n-1; 
    // printing the output 
for(int i=0;i<n;i++){
printf("%d ",a[i]); 
}
    
    //write your code here
}
