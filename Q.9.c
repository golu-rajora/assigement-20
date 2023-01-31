//9. Write a program to print the elements of an array in reverse order
#include<stdio.h>
 void reverse(int *p,int size);
int main()
{
    int a[10];
    printf("Write a program to print the elements of an array in reverse order:-\n");
    printf("enter 10 element:-");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
         reverse(a,10);
         for(int i=0;i<10;i++)
         printf(" %d",a[i]);
      getch();
      return 0;
}
 void reverse(int *p,int size)
 {
     for(int i=0;i<size/2;i++)
       {
        int t;
           t=*(p+i);
          *(p+i)=*(p+size-1-i);
          *(p+size-1-i)=t;
       }

 }
