#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    vector<int>v(n,0);
    map<int,int>mp;
    mp[0]++;
    for(int i=0;i<t;i++)
    {
        int x,y;
        cin>>x>>y;
        
        v[x]+=y;
        mp[v[x]]++;
        cout<<mp.size()<<endl;;
    }
}