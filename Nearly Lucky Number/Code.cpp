#include<bits/stdc++.h>
using namespace std; 
int main()
{
    long long int n; 
    int countLuckynumber=0;
    cin>>n;
    // Counting how many digits are equals to 4 or 7(Lucky digits).
    while(n!=0)
    {
        if(n%10==4 || n%10==7)
        {
            countLuckynumber++;
        }
        n/=10;
    }
    // If total lucky digits are equals to 4 or 7, print yes otherwise no.
    if( countLuckynumber == 4 || countLuckynumber == 7)
    {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}