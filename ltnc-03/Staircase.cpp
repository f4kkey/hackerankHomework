#include<bits/stdc++.h>
#define ll long long
using namespace std;
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++) cout<<" ";
		for(int j=n-i+1;j<=n;j++) cout<<"#";
		cout<<"\n";
	}
}

