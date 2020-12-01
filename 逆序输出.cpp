#include<stdio.h>
int main()
{
	int n,a[8],j,k;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	
	scanf("%d",&a[j]);
    for(k=n-1;k>=0;k--)  
       {
        j++;
        n=a[j]; 
        a[j]=a[k]; 
        a[k]=n; 
	   
    printf(" %d",a[j]);    
     	} 
	return 0;   
}

