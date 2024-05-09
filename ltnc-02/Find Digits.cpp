#include<bits/stdc++.h>
#define ll long long
using namespace std;
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,tmpn;
		cin>>n;
		tmpn=n;
		ll cnt=0;
		while(n>0)
		{
			ll tmp=(n%10);
			if(tmp!=0&&tmpn%tmp==0) cnt++;
			n/=10;
		}
		cout<<cnt<<"\n";
	}
}

