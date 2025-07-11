#include<stdio.h>
int n,k;
int count=0;
void eligible(int array[])
{
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
        for(int i=0; i<n; i++)
        {
             if(array[k-1]<=array[i] && array[i]>0)
            {
                count++;
            }
           
        }

}
int main()
{
    scanf("%d",&n);
    scanf("%d",&k);
    if(!(n>=k && n>=1 && n<=100 && n>=1 && n<=100))
    {
        scanf("%d",&n);
        scanf("%d",&k);
    }
    int array[n];
    eligible(array);
    printf("%d",count);
    return 0;
}