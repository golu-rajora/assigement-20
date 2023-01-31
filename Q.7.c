//7. Write a program to count the number of vowels and consonants in a string using a
//pointer.
#include<stdio.h>
#include<string.h>
void count(char*p,int *v,int *c,int *s);
int main()
{
    char a[50];
    int v=0,c=0,s=0;
    printf("count vowels and consonants:-\n");
    printf("enter the name:-");
    gets(a);
    count(a,&v,&c,&s);
    printf("number of vowels is=%d",v);
   printf("\nnumber of consonants is=%d",c);
    getch();
    return 0;
}
void count(char*p,int *v,int *c,int *s)
{

   for(int i=0;*(p+i)!='\0';i++)
   {
       if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='0'||*(p+i)=='u')
            *v=*v+1;
       else
        if(*(p+i)==32)
             *s=*s+1;
         else
            *c=*c+1;
   }
}


