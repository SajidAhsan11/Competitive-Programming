#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; // n is a random number and k is a number which indecates how many time will a operation run upon n.
    cin>>n>>k;
    // If the last digit of n is not equals 0 then n will decreases by 1 oherwise divided by 10.
    for(int i=0; i<k; i++)
    {
        if(n%10 != 0)
        {
            n-=1;
        }
        else {
            n/=10;
        }
    }
    cout<<n<<endl;
    return 0;
}