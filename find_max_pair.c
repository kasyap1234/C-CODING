#include<stdio.h>
#include<stdlib.h>
int comparator (const void * p1, const void * p2)
{
  return (*(int*)p1 - *(int*)p2);
}
int main()
{
  int n; 
scanf("%d",&n); 
int a[n]; 
for(int i=0;i<n;i++){
scanf("%d",&a[i]); 
}

qsort(a,n,sizeof(int),comparator); 
   
int maximum=a[n-1]; 
    int lmaximum=a[n-2]; 
   int  sum=maximum+ lmaximum; 
printf("%d",sum); 
    


    


    //write your code here
}
