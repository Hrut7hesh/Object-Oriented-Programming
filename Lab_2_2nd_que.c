#include<stdio.h>

int ptr()
{
    int *ptr,i;
    int a[100];
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(a+i))
    }
}

int main()
{
    int a[100],i,n,sum=0;
    int *ptr;
    float avg;
    printf("Enter total number of courses:\n");
    scanf("%d",&n);
    printf("Enter the marks of courses:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ptr(a[100],)
    for(i=0;i<n;i++)
    {
        sum=sum+*ptr;
        ptr++;
    }
    avg=sum/n;
    printf("The average marks of courses is %f",avg);
}