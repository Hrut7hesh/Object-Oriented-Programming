#include<stdio.h>

int main()
{
    int a,b,temp;
    int *ptr1,*ptr2;
    printf("Enter the Jersey numbers from two notebook:");
    scanf("%d %d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    printf("The jersey number before swapping books:%d,%d\n",a,b);
    temp=*ptr2;
    *ptr2=*ptr1;
    *ptr1=temp;
    printf("The jersey number after swapping books:%d,%d",a,b);
}
