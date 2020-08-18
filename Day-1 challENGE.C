#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr,n,d,i;

    scanf("%d %d",&n,&d);
    arr=(int*)malloc(n*sizeof(int));
    
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    d=d%n; 

    for(i=d;i<n;i++)
        printf("%d ",arr[i]); 
        
    for(i=0;i<d;i++) 
        printf("%d ",arr[i]); 
          
    return 0;       
}
