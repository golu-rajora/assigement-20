//5. Write a program to find the maximum number between two numbers using a pointer
#include<stdio.h>
int* big(int *p,int *q);
int main()
{
    printf("Write a program to find the maximum number between two numbers using a pointer:-\n");
    printf("enter two number:-");
    int x,y;
    scanf("%d %d",&x,&y);
    int *z=big(&x,&y);
    printf("maximum number is %d",*z);
    getch();
    return 0;
}
   int* big(int *p,int *q)
   {
       if(*p<*q)
        return q;
       else
        return p;
   }
