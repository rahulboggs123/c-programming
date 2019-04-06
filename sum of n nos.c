#include<stdio.h>
int i;
void input1(int *n)
{
    printf("enter the number of elements");
    scanf("%d",n);
}
void  input2(int a[n])
{
    for(i=0;i<ni++)
     {
        scanf("%d",&a[i]);
     }
}
int compute( int n,int a[n])
{ 
   for (i=0;i<n;i++)
     {
        sum=sum+a[i];
     }
     return sum; 
}
void output(int sum ,int a[n])
{
  printf("the sum of");
  for(i=0;i<ni++)
  {
      printf("%d\t +"i);
  }
  printf("=%d"sum);
}
int main()
{
    int n,a[100],sum;
    input1(&n) ;
    input2(a[n]); 
    sum=compute(n,a[n]);
    output();
    return 0;
}
