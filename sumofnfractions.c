#include<stdio.h>
void input(int *n)
{
    printf("enter the number of fractions");
    scanf("%d",n);
}
void input1(int n ,int num[n],int den[n])
{
    int i;
    printf("enter all the numerators");
    for(i=0;i<n;i++)
    scanf("%d",&num[i]);
    printf("enter all denominators");
    for(i=0;i<n;i++)
    scanf("%d",&den[i]);
}
int compute(int n,int den[n])
{
    int i,lcm=1;
    for(i=0;i<n;i++)
    {
       lcm=lcm*den[i];
    }
    return lcm;
}
int  compute1(int n, int num[n],int den[n],int x)
{   
    int i,factor,sum=0;
    for(i=0;i<n;i++)
    {
        //if(den[i]==0)
           // return den[i];
        if(den[i]!=0)
          {
            factor=x/den[i] ;
            sum=sum+(factor*num[i]);
          }
      
    }
   return sum;
}
void output(int n,int num[n],int den[n],int x,int s)
{   
    int i;

    for(i=0;i<n;i++)
    {
        printf("%d/%d+",num[i],den[i]);
    }
    printf("=%d/%d",s,x);
}
void main()
{
   int n,num[100],den[100],x,s;
   input(&n);
   input1(n,&num[n],&den[n]) ;
   x=compute(n,&den[n]);
   s=compute1(n,&num[n],&den[n],x);
   output( n,&num[n],&den[n],x,s);
   
}
