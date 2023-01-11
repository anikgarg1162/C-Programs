#include<stdio.h>
int main()
{int a,b;
printf("enter number=");
scanf("%d",&a);
printf("enter number=");
scanf("%d",&b);
 printf("\n value before swapping a=%d    and    b=%d\n",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("after swaping first no. is:%d \t second no. is :%d\n",a,b);
 printf("\n number is :%d%d",a,b);
 'return0';
}
