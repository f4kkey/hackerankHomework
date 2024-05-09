#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<vector<int> > a;
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,q;
	cin>>n>>q;
	a.resize(n);
	for(int i=0;i<n;i++)
	{
		int k;
		cin>>k;
		for(int j=0;j<k;j++)
		{
			int x;
			cin>>x;
			a[i].push_back(x);
		}
	}
	while(q--)
	{
		int i,j;
		cin>>i>>j;
		cout<<a[i][j]<<"\n";
	}
}

