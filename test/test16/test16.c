#include<stdio.h>
typedef union 
{
    int i;
    char ch[sizeof(int)];
}CHI;

//int main(int argc, char const *argv[])
int main(void)
{
    CHI chi;
    int i;
    chi.i = 1234;
    for ( i = 0; i < sizeof(int); i++)
    {
        printf("%02hhx",chi.ch[i]);
        printf("%d",sizeof(int));
    }
    return 0;
}
