#include<stdio.h>
int main()
{
    int n; // Size of a string.
    int count = 0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",&s);
    // Counting how many colours are sequential (R = red, G = green, B = blue). 
    for(int i=0; i<n; i++)
    {
        if(s[i]=='R')
        {
            if(s[i+1]==s[i])
            {
                count++;
            }
        }
        else if(s[i]=='G')
        {
            if(s[i+1]==s[i])
            {
                count++;
            }
        }
        else if(s[i]=='B')
        {
            if(s[i+1]==s[i])
            {
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}