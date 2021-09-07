#include<stdio.h>
int main()
{
    int n; 
    scanf("%d",&n); 
    int a[n]; 
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]); 
    }
    // frequency array to store the frequencies 
int freq[n]; 
for(int i=0;i<n;i++){
freq[i]=-1; 
}
    // if we find another element having same value we update the frequency array at the ith and j the postion by 1
    
    for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
    if(a[i]==a[j]){
    freq[i]+=1; 
    freq[j]+=1; 
    } 
    } 
    }
    // printing the frequency array . 
    
for(int i=0;i<n;i++){
printf("%d ",freq[i]); 
} 
    

    
   
    
    
    
    //write your code here
}
