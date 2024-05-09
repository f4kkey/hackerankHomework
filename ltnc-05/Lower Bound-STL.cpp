#include<bits/stdc++.h>
#define ll long long
using namespace std;
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<int > v;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	int q;
	cin>>q;
	while(q--)
	{
		int x;
		cin>>x;
		int pos=lower_bound(v.begin(),v.end(),x)-v.begin();
		if(v[pos]==x) cout<<"Yes ";
		else cout<<"No ";
		cout<<pos+1<<"\n";
	}
}

