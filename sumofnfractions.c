#include<stdio.h>
void input(int *n)
{
    printf("enter the number of fractions");
    scanf("%d",n)
}
void input1(int n ,int num[n],int den[n] )
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
int  compute1(int n, int num[n],int den[n]],x)
{   
    int i;
    for(i=0,i<n;i++)
    {
        if(den[i]==0)
        return den[i];
    }
    
    for(i=0,i<n;i++)
    {
        if(den[i]!=0)
        {

        }
        
    }
   
}
void output()
{   
     
}
void main()
{
   int n,num[],den[],x;
   input(&n);
   input1(n,&num[n],&den[n]) ;
   x=compute(n,&den[n])
   compute1(n,&num[n],&den[n],x);

}
