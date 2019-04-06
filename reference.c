#include<stdio.h>
void get_input(int *a,int *b)
{
       printf("enter 2 nos");
       scanf("%d%d",a,b);
}
int  add2nos(int  *a,int *b)
{
    int c;
    c=*a+*b;
    return c;
}
void output(int a,int b,int c)
{
     printf("%d+%d=%d",a,b,c);
}
int main()
    {
        int a,b,c;
        get_input(&a,&b);
        c=add2nos(&a,&b);
        output(a,b,c);
        return 0;
    }
