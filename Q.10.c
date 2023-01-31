//10. Write a program to print a string in reverse using a pointer
#include<stdio.h>
#include<string.h>
void string_reverse(char *p,int x);
int main()
{
    char a[20];
    printf("Write a program to print a string in reverse using a pointer:-\n");
    printf("enter a name:-");
    gets(a);
     int x=strlen(a);
     printf("reverse name is:-");
    string_reverse(a,x);
    for(int i=0;i<x;i++)
        printf("%c",a[i]);
    getch();
    return 0;
}
void string_reverse(char *p,int x)
{
    for(int i=0;i<x/2;i++)
       {
          char t;
           t=*(p+i);
          *(p+i)=*(p+x-1-i);
          *(p+x-1-i)=t;
       }

}

