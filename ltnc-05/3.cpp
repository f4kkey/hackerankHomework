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
	int x,a,b;
	cin>>x>>a>>b;
	v.erase(v.begin()+x-1);
	v.erase(v.begin()+a-1,v.begin()+b-1);
	cout<<v.size()<<"\n";
	for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}

