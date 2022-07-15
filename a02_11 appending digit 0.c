
#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b;
    printf("Enter a number and a digit.\n");
    scanf("%d %d",&a,&b);
    a=a*10+b;
    printf("%d",a);
    getch();

    return 0;
}
