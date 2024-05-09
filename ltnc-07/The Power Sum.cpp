#include<bits/stdc++.h>
#define ll long long
using namespace std;
int mu[1010];
int f[1010][1010];
int dp(int x,int pre)
{
//	cout<<x<<" "<<pre<<"\n";
	if(x==0) return 1;
	int &res=f[x][pre];
	if(res) return res;
	for(int i=pre+1;i<=x&&mu[i]<=x;i++)
	{
//		cout<<x<<" "<<i<<" "<<mu[i]<<"\n";
		if(x>=mu[i]) res+=dp(x-mu[i],i);
	}
	return res;
}
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,x;
	cin>>x>>n;
	for(int i=1;i<=x;i++) 
	{
		mu[i]=1;
		for(int j=1;j<=n;j++) mu[i]=i*mu[i];
	}
	memset(f,0,sizeof(f));
	cout<<dp(x,0);
}

