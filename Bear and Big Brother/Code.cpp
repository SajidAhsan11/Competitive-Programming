#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int count=0;
    cin>>a>>b;
    // Finfing in how many year a becomes greater then b. (In a year a becomes triple and b becomes double)
    while(true)
    {
        a*=3;
        b*=2;
        count++;
        if(a>b)
        {
            break;
        }
    }
    cout<<count<<endl;
    return 0;

}
