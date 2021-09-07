#include<stdio.h>
int main()
{// input the number of elements 
    int n; 
    
    scanf("%d",&n); 
    int a[n]; 
    //input the elements of array  
   for(int i=0;i<n;i++){
   scanf("%d",&a[i]); 
   }
    // day at which cars are fined 
    int day; 
    scanf("%d",&day); 
    int sum=0; 
    // if day is even ; then we fine the odd number plate cars 
     if(day%2==0){
     for(int i=0;i<n;i++){
     if(a[i]%2!=0){
         sum+=250; 
     }}}
    // if day is odd; then we fine the even number plate cars 
    if (day%2!=0){
        for(int i=0;i<n;i++){
        if(a[i]%2==0){
        sum+=250; }}
    }
    printf("%d",sum); 
    return sum; 
    
    //write your code here
}
