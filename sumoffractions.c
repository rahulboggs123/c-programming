#include<stdio.h>
void input(int*num1,int*den1,int*num2,int*den2)
{
    printf("enter numerator and denominator of first fraction");
    scanf("%d%d",num1,den1);
    printf("enter numerator and denominator of second fraction");
    scanf("%d%d",num2,den2);
}
int  compute1(int num1,int den1,int num2,int den2,int *den3,int *num3)
{
    if(den1==den2==0)
       return 0;
    if(den1==1)
        {
           *num3=(den2*num1)+num2;
           *den3=den2;
        } 
    else if(den2==1) 
        {
            *num3=(den1*num2)+num1;
            *den3=den1;
        } 
    else
        {
            *num3=(den1*num2)+(den2*num1);
            *den3=den2*den1;
        }
}
void output(int num1,int den1,int num2,int den2,int*den3,int*num3,int x)
{   
     if(x==0)
        printf("invalid input");
     printf("%d %d %d\n",num1,num2,*num3) ;
     printf("_+_=_\n");
     printf("%d %d %d \n",den1,den2,*den3) ;
}
void main()
{
    int num1,den1,num2,den2,den3, x,num3;
    input(&num1,&den1,&num2,&den2);
    x=compute1(num1,den1,num2,den2,&den3,&num3);
    output(num1,den1,num2,den2,&den3,&num3,x);

}
