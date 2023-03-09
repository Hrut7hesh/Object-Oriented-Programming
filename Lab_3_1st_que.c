#include <stdio.h>

typedef struct complex
{
    int r,i;
}CMP;
void sum(CMP a,CMP b)
{
    int c,d;
    c=a.r+b.r;
    d=a.i+b.i;
    printf("\nAddition of given two complex numbers is : %d+(%d)i ",c,d);
}
void subtract(CMP a,CMP b)
{
    int e,f;
    e= a.r-b.r;
    f= a.i-b.i;
    printf("\nSubtraction of given two complex numbers is : %d+(%d)i ",e,f);
}
void main()
{
    CMP n1,n2;
    printf("Enter real and imaginary part of 1st complex number:");
    scanf("%d %d",&n1.r,&n1.i);
    printf("Enter real and imaginary part of 1st complex number:");
    scanf("%d %d",&n2.r,&n2.i);
    printf("Entered complex numbers are %d+(%d)i and %d+(%d)i",n1.r,n1.i,n2.r,n2.i);
    sum(n1,n2);
    subtract(n1,n2);
    printf("\nSubmitted by Gelle Hruthesh Reddy Admn.No 20BCB7031");
}