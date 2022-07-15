
#include<stdio.h>
#include<conio.h>

int main()
{
    int a=34, b=49;
    a+=b;
    b=a-b;
    a-=b;
    printf("%d %d",a,b);

    getch();

    return 0;
}
