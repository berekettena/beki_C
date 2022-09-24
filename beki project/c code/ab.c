#include<stdio.h>
int main(void)
{
int b[1];
int i;
for(i=0;i<4;i++)
{
printf("\n enter array elementsof :%d ",i);
scanf("%d",&b[i]);
}



for(i=0;i<4;i++)
{
printf("array elements you entered are: %d\n",b[i]);
}

return 0;
}
