#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin>>word;
    // Changing the 1st character lowercase letter to upercase letter 
    word[0]=toupper(word[0]);
    for(auto i : word)
    {
        cout<<i;
    }
    return 0;

}
