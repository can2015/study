#include<stdio.h>
int main()
{
    int count=100;
    int i=0,t=0;
    while (count >= 0 )
    {
        printf("%d\n",count);
        printf("%d\n",t++);
        count--;
    }
    printf("p\n");
    return 0;  
}