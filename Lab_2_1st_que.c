#include <stdio.h>

int main()
{
    int a[100],i,n,p,flag=0;
    printf("Enter total number of wooden pieces:\n");
    scanf("%d",&n);
    printf("Enter the numbers on wooden piece:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Pick a Number from above:\n");
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        if(p==a[i])
        flag=1;
        else
        flag=0;
    }
    if(flag=1)
    {
        printf("Your number is %d\n",p);
        for(i=2;i<=n/2;i++)
        {
        if(p%i==0)
        printf("%d has factors other than 1 and itself\n");
        else
        printf("%d has only two factors 1 and itself\n");
        }
    }    
    else
    printf("Select the number from above list\n");
}