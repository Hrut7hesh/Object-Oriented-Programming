#include<stdio.h>

int main()
{
    int i,n,a[100],high;
    printf("Enter the number of floors which contains mobilephone showrooms:\n");
    scanf("%d",&n);
    printf("Enter Floor numbers contains mobilephone showrooms\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    high=a[0];
    for(i=1;i<n;i++)
    {
        if(high<a[i])
        {
            high=a[i];
        }
    }
    printf("The highest floor in D-Mart to find karthik in mobile showroom is %d",high);
}    