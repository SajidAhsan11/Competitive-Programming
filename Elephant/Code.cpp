#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x; 
    cin>>x;
    //If x is not divisible by 5 then print ceiling value of x/5, else print the quotient only.
    if(x%5!=0)
    {
        cout<<(x/5)+1<<endl;
    }
    else {
    cout<<x/5<<endl;
    }
    return 0;
}