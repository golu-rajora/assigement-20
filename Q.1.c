//1. Write a function to swap values of two in variables of calling function.
#include<stdio.h>
void swap(int *p,int *q);
int main()
{
    int x,y;
    printf("Write a function to swap values of two in variables of calling function:-\n");
    printf("enter two number:-");
    scanf("%d %d",&x,&y);
    printf("before swapping value x=%d and y=%d",x,y);
    swap(&x,&y);
    printf("\nafter swapping value x=%d and y=%d",x,y);
    getch();
    return 0;
}
   void swap(int *p,int *q)
   {
       int t;
       t=*p;
       *p=*q;
       *q=t;
   }
