#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int countA=0, countD=0;
    cin>>n;
    string s;
    cin>>s;
    // Counting A and D character.
    for(int i=0; i<n; i++)
    {
        if(s.at(i)=='A')
        {
            countA++;
        }
        else if(s.at(i)=='D')
        {
            countD++;
        }
    }
    /* If A character is greater than D then print Anton, 
    D character is greater than A print Danik, 
    if both are equals then print Friendship*/ 
    if(countA>countD)
    {
        cout<<"Anton"<<endl;
    }
    else if(countD>countA) {
        cout<<"Danik"<<endl;
    }
    else {
        cout<<"Friendship"<<endl;
    }
    return 0;
}