#include <stdio.h>
int power(int,int);

int main()
{
  int n,sum=0,temp,r,number=0;
  printf("Enter your Number:\n");
  scanf("%d",&n);
  temp=n;
  while(temp!= 0) 
  {
    number++;
    temp=temp/10;
  }
  temp=n;
  while(temp!=0)
  {
    r=temp%10;
    sum=sum+power(r,number);
    temp=temp/10;
  }
  if(n==sum)
  {
    printf("Length of number is %d\n",number);
    printf("It follows the condition as the sum of digits of power length is %d which is equal to the given number %d",sum,n);
  }
  else
    printf("Number %d not meets the condition\n",n);
  return 0;
}

int power(int n, int r) 
{
  int i,p=1;
  for(i=1;i<=r;i++)
  p=p*n;
  return p;
}