#include<stdio.h>

int main()
{
    int i,a[5],sum=0;
    float avg=0;
    printf("Enter the marks of five courses:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/5;
    printf("The average marks is %f\n",avg);
    for(i=0;i<5;i++)
    {
        if(a[i]>avg)
        {
            printf("The courses which Rishitha scored more than average are: %d\n",a[i]);
        }    
    }
}