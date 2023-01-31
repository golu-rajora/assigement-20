//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int *ptr,int size);
int main()
{
    int a[10];
    printf("Write a function to sort an array of int type values:-\n");
    printf("enter the 10 element:-");
    for(int i=0;i<=9;i++)
    scanf("%d",&a[i]);
    printf("sort element is:-");
    sort(a,10);
    for(int i=0;i<10;i++)
        printf(" %d",a[i]);
    getch();
    return 0;
}
 void sort(int *ptr,int size)
  {
      for(int i=0;i<9;i++)
      {
          for(int j=i+1;j<=9;j++)
          {
              if(*(ptr+i)>*(ptr+j))
              {
                int t;
                t=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=t;
              }
          }
      }
  }
