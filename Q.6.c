//6. Write a program to calculate the length of the string using a pointer
#include<stdio.h>
#include<string.h>
void length(char *p,int*count);
int main()
{
    char a[20];
    int count=0;
    printf("Write a program to calculate the length of the string using a pointer:-\n");
    printf("enter a name :-");
    gets(a);
    length(a,&count);
    printf("length of name is =%d",count);
    getch();
    return 0;
}
void length(char*p,int*count)
{
    for(int i=0;*(p+i)!='\0';i++)
        *count=*count+1;

}
