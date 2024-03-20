#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[110];
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,k,res=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if((a[i]+a[j])%k==0) res++;
		}
	}
	cout<<res;
}

