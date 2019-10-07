#include <stdio.h>
int main()
{
   printf("你好\n");
   int type=3;
   for (int i = 6; i >= type; i--)
   {
        printf("%d\n",i);
       printf("A\n");
   }
   
   
   switch (type)
   {
   case 1:
       printf("hello\n");
       break;
    case 2:
       printf("hello\n");
       break;
     case 3:
       printf("hello\n");
       break;
   default:
   printf("AAAAA");
       break;
   }

    return 0;
}