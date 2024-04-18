#include<bits/stdc++.h>
#define ll long long
using namespace std;
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin>>q;
	map<string,int> mp;
	while(q--)
	{
		int t;
		cin>>t;
		if(t==1)
		{
			string a;
			int b;
			cin>>a>>b;
			mp[a]+=b;
		}
		else
		{
			string a;
			cin>>a;
			if(t==2) mp[a]=0;
			else cout<<mp[a]<<"\n";
		}
	}
}

