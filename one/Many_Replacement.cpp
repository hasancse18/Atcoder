#include<bits/stdc++.h>
using namespace std;
void solve(char c,char d,string &s)
{
    string ans="";
    for(auto &it:s)
    {
        if(c==it)
        {
            it=d;
        }
    }
    //cout<<s;
}
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int q;
    cin>>q;
    map<char,char>mp;
    for(char ch='a';ch<='z';ch++)
    {
        mp[ch]=ch;
    }
    for(int i=0;i<q;i++)
    {
        char c,d;
        cin>>c>>d;
        for(auto &it:mp)
        {
            if(it.second==c) it.second=d;
        }
    }
    for(auto &it:s)
    {
        it=mp[it];
    }
    cout<<s<<endl;
//atcoder beginner contest 342
//https://atcoder.jp/contests/abc342/tasks
}