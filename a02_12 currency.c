
#include<stdio.h>
#include<conio.h>

int main()
{
     int r;
     printf("Enter the amount you want to convert into dollars.\n");
     scanf("%d",&r);

     printf("%d rupees = %f dollars",r,1/76.23*r);
     getch();
}
