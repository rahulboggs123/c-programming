#include<stdio.h>
void input(int*num1,int*den1,int*num2,int*den2)
{
    printf("enter numerator and denominator of first fraction");
    scanf("%d%d",num1,den1);
    printf("enter numerator and denominator of second fraction");
    scanf("%d%d",num2,den2);
}
int compute1(int num1,int den1,int num2,int den2)
{
    int num3;
    if(den1==den2==0)
       return 1;
    if(den1==1)
        {
           num3=(den2*num1)+num2;
        } 
    else if(den2==1) 
        {
            num3=(den1*num2)+num1;
        } 
    else
        {
            num3=(den1*num2)+(den2*num1);
        }
        return num3;
}
int  compute2(int den1,int den2)
{    
    int den3;
    if(den1==1)
       {
           den3=den2;
       }
    else if(den2==1)
       {
           den3=den1;
       }
    else
       {
           den3=den1*den2;
       }
       return den3;
}
void output(int num1,int den1,int num2,int den2,int x,int y)
{   
     if(x==1)
        printf("invalid input");
     printf("%d %d %d\n",num1,num2,x) ;
     printf("_+_=_\n");
     printf("%d %d %d\n",den1,den2,y) ;
}
void main()
{
    int num1,den1,num2,den2,x,y;
    input(&num1,&den1,&num2,&den2);
    x=compute1(num1,den1,num2,den2);
    y=compute2(den1,den2);
    output(num1,den1,num2,den2,x,y);
}
