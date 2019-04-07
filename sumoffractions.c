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
   if(den1==0||den2==0)
       return 100000;
       if(den1!=den2) 
       {
            *num3=(num1*den2)+(num2*den1);
            *den3=den1*den2;
        }
}
void output(int num1,int den1,int num2,int den2,int*den3,int*num3,int x)
{   
     if(x==100000)
        printf("invalid input");
     printf("%d %d %d\n",num1,num2,*num3) ;
     printf("_+_=_\n");
     printf("%d %d %d \n",den1,den2,*den3) ;
}
void main()
{
    int num1,den1,num2,den2,x, den3,num3;
    input(&num1,&den1,&num2,&den2);
    x=compute1(num1,den1,num2,den2,&den3,&num3);
    output(num1,den1,num2,den2,&den3,&num3,x);

}
