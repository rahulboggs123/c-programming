#include<stdio.h>
int i;
void input1(int *n)
{
    printf("enter the number of elements");
    scanf("%d",n);
}
void  input2(int n,int a[n])
{
    for(i=0;i<n;i++)
     {
        printf("enter the next number\n");
        scanf("%d",&a[i]);
     }
}
int compute( int n,int a[n])
{ 
    int sum=0;
   for (i=0;i<n;i++)
     {
        sum=sum+a[i];
     }
     return sum; 
}
void output(int n ,int sum ,int a[n])
{
  printf("the sum of\t");
  for(i=0;i<n;i++)
  {
      printf("%d +",a[i]);
  }
  printf("=%d",sum);
}
int main()
{
    int n,a[100],sum;
    input1(&n) ;
    input2(n,&a[n]); 
    sum=compute(n,&a[n]);
    output(n,sum,&a[n]);
    return 0;
}
