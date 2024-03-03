#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp.insert({x,i});
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        if(mp[a]<mp[b])
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<b<<endl;
        }
    }
}