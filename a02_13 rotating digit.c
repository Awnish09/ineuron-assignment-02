
#include<stdio.h>
#include<conio.h>

int main()
{
     int a;
     printf("Enter three digit number.\n");
     scanf("%d",&a);
     a=a%10*100+a/10;

     printf("%d",a);
     getch();
}
