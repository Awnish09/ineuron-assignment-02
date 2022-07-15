
#include<stdio.h>
#include<conio.h>

int main()
{
    int a, i=0, b;
    printf("Enter a three digit number.\n");
    scanf("%d",&a);
    b=a%10;
    i+=b;
    a/=10;
    b=a%10;
    i+=b;
    a/=10;
    i+=a;
    printf("The sum of the digits is %d",i);
    getch();

    return 0;
}
