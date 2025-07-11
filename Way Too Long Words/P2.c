#include<stdio.h>
#include<string.h>

/* This function will check is a string more than 10 character if yes then replace it by character number between first letter and last latter middle of first and last letter */

void check(char name[100])
{
    if(strlen(name)>10)
    {
        printf("%c%d%c\n",name[0],(strlen(name))-2,name[strlen(name)-1]);
    }
    else {
        printf("%s\n",name);
        }
}
int main()
{
    int n;
    char name[100];
    scanf("%d",&n);

//This loop will take n strings and check

    for(int i=0; i<n; i++)
    {
        scanf("%s",name);
        check(name);
    }

    return 0;
}
