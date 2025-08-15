#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int count=0;
    cin>>a>>b;
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