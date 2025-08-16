#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int countUppercase=0, countLowercase=0;
    string s;
    cin>>s;
    // Counting how many upper and lower case letter are in the string.
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s.at(i)))
        {
            countUppercase++;
        }
        if(islower(s.at(i)))
        {
            countLowercase++;
        }
    }
    // If the amount of upper case letter is greater than lower case letter, covert all letter to uppercase letter.
    if(countUppercase>countLowercase)
    {
        for(int i=0; i<s.size(); i++)
        {
            s.at(i)=toupper(s[i]);
        }
    }
    // If the amount of lower case letter is equal or greater than uppercase letter, convert all letter to lowercase letter. 
    else if(countUppercase==countLowercase)
    {
        for(int i=0; i<s.size(); i++)
        {
            s.at(i)=tolower(s[i]);
        }
    }
    else {
        for(int i=0; i<s.size(); i++)
        {
            s.at(i)=tolower(s[i]);
        }
    }
    cout<<s<<endl;
    return 0; 
}