#include<stdio.h>
#include<string.h>

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
    for(int i=0; i<n; i++)
    {
        scanf("%s",name);
        check(name);
    }

    return 0;
}
