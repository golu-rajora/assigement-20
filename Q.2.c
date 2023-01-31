//2. Write a function to swap strings of two char arrays of calling functions.
#include<stdio.h>
void swap(char *p,char *q);
int main()
{
    char x,y;
    printf("Write a function to swap strings of two char arrays of calling functions:-\n");
    printf("enter  two character number:-");
    scanf("%c %c",&x,&y);
    printf("before swapping value x=%c and y=%c",x,y);
    swap(&x,&y);
    printf("\nafter swapping value x=%c and y=%c",x,y);
    getch();
    return 0;
}
   void swap(char *p,char *q)
   {
       char t;
       t=*p;
       *p=*q;
       *q=t;
   }
