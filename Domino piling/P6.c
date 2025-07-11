#include<stdio.h>
//Checking how many domino will fit into a rectangular of M*N area
void max_domino(int M, int N)
{
    int area =M*N;
    int domino_area = 2;
    int max_domino = area/domino_area;
    printf("%d",max_domino);
}
int main()
{
    int M,N;
    scanf("%d  %d",&M, &N);
    max_domino(M,N);
    return 0;
}