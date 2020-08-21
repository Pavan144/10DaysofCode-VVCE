#include <stdio.h>
#include <stdlib.h>
#define MAX 100010

long int q_arr[MAX];
long int f=-1;
long int r=-1;

void Enqueue()
{
    if (f == -1) 
    f=0;

    long int x;
    scanf("%ld", &x);
    r=r+1;
    q_arr[r] = x;    
}
void Dequeue()
{
    f=f+1;
}

void display()
{
    printf("%ld \n",q_arr[f]);
}

int main()
{
    int a,i;
    long int n;
    scanf("%ld",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==1)
          Enqueue();
        else if(a==2)
          Dequeue();
        else if(a==3)
          display();
        else
        {}
    }
}