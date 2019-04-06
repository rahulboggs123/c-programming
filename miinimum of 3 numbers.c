#include<stdio.h>
void input(int *a ,int *b,int *c)
{
    printf("enter thre numbers");
    scanf("%d%d%d",a,b,c);
}
int compute(int a,int b ,int c)
{
    int min;
    min=a;
    if(min>b)
    min =b;
    if(min>c)
    min=c;
    return c;
}
void output(int a,int b,int c,int min)
{
  printf("the minimum of %d,%d,%d is %d",a,b,c,min);

}
int main()
{
    int a,b,c,min;
    input(&a,&b,&c);
    min=compute(a,b,c);
    output(a,b,c,min);
}
