#include<bits/stdc++.h>
#define ll long long
using namespace std;
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int q;
	cin>>q;
	set<int> st;
	while(q--)
	{
		int a,b;
		cin>>a>>b;
		if(a==1) st.insert(b);
		if(a==2) st.erase(b);
		if(a==3)
		{
			if(st.find(b)!=st.end()) cout<<"Yes\n";
			else cout<<"No\n";
		}
	}
}

