#include<stdio.h>
int  main(void)
{ 

    int a;
    printf("enter num\n");
    scanf("%d",&a);
    printf("your input is %d\n",a);//9
    printf("your input after incremented by one: %d\n",a++); //9
if(a == 10)//a=10
{
    printf("hello world\n");//10
    printf("value of a %d\n",a);//10
}
        return (0);
}