#include <stdio.h>
int main(void)
{
    int a,b;
    printf("输入2个数:");
    scanf("%d %d",&a, &b);
     int max=b;
    if (a > b)
    {
        max = a ;
    }
    
printf("最大:%d\n",max);
}