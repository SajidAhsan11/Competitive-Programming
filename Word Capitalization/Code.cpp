#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin>>word;
    word[0]=toupper(word[0]);
    for(auto i : word)
    {
        cout<<i;
    }
    return 0;
}