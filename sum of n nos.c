#include<stdio.h>
void input1(int *n)
{
    printf("enter the number of elements");
    scanf("%d",n);
}
void  input2(int n,int a[n])
{   int i;
    for(i=0;i<n;i++)
     {
        printf("enter the next number\n");
        scanf("%d",&a[i]);
     }
}
int compute( int n,int a[n])
{   int i;
    int sum=0;
   for (i=0;i<n;i++)
     {
        sum=sum+a[i];
     }
     return sum; 
}
void output(int n ,int sum ,int a[n])
{
  int i;
  printf("the sum of");
  printf("%d",a[0]);
  for(i=1;i<n;i++)
  {
     printf("+%d",a[i]);
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
