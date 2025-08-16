#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;
    int sum = 0;
    int borrowMoney; 
    cin>>k>>n>>w; // k = initial cost, buyer have n money, and w = amount of bananas
    // Calculating the total cost of w bananas after paying wth banana where initial price was k dollar.
    for(int i=1; i<=w; i++)
    {
        sum+=(k*i); // price of banana increasing by k dolar to k*number of banana(i).
    }
    borrowMoney = sum-n;
    // If total cost of bananas is less then n then it print 0 otherwise how much money have to borrow. 
    if(borrowMoney<=0)
    {
    cout<<0<<endl;
    }
    else {
    cout<<borrowMoney<<endl;
    }
    return 0;
}