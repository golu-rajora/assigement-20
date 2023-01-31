//8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
int sum(int *p,int size,char *r);
int main()
{
    int a[10];
     int s=0;
    printf("a program to compute the sum of all elements in an array using pointers:-\n");
    printf("enter 10 element:-");
    for(int i=0;i<=9;i++)
        scanf("%d",&a[i]);
      sum(a,10,&s);
      printf("sum of all element is=%d",s);
      getch();
      return 0;
}
  int sum(int *p,int size,char *r)
  {

      for(int i=0;i<size;i++)
       {
          *r=*(p+i)+*r;
       }
  }
