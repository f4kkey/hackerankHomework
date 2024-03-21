#include<bits/stdc++.h>
#define ll long long
using namespace std;
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	string lmao="hackerrank";
	while(t--)
	{
		string s;
		cin>>s;
		int cur=0;
		for(int i=0;i<s.size();i++)
		{
			if(lmao[cur]==s[i]) cur++;
		}
		if(cur==lmao.size()) cout<<"YES\n";
		else cout<<"NO\n";
	}
}

