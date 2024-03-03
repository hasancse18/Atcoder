#include<bits/stdc++.h>
using namespace std;
//#define unsigned long long int as ull
bool check(long long int num)
{
    string str=to_string(num);
    string s=str;
    reverse(s.begin(),s.end());
    return s==str;
}
int main()
{
    long long int n,i,ans=0;
    cin>>n;
    //cout<<n<<endl;
    for(i=1;i*i*i<=n;i++)
    {
        unsigned long long int num=i*i*i;
        if(check(num))
        {
            ans=num;
        }
    }
    cout<<ans<<endl;
}