#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int>mp;
    map<char,int>mp1;

    for(auto it:s)
    {
        mp[it]++;
    }
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        mp1.insert({s[i],i});
    }
    for(auto it:mp)
    {
        if(it.second==1)
        {
            cout<<mp1[it.first]+1<<endl;
            break;
        }
    }



}