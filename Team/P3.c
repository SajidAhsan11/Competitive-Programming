#include<stdio.h>
int one_count=0;
int count=0;
void count_solved_problem(int n)
{
// This loop will run for n problems
for(int i=0; i<n; i++)
    {
        int f[3];   
        for(int j=0; j<3; j++) //Taking input
        {
            scanf("%d",&f[j]);
        }
//Counting 1 in each problem
        for(int j=0; j<3; j++)
        {
            if(f[j]==1)
            {
                one_count ++;
            }
        }
//If count is equal or grater than 2 then they will solve the problem.
        if(one_count>=2)
        {
            count++;
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    count_solved_problem(n);
    printf("%d",count);
    return 0;
}