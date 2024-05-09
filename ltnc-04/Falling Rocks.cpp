#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
int a[1010][1010];
int f[1010][1010];
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>m>>n;
	int si,sj;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			char x;
			cin>>x;
			a[i][j]=(x=='R');
			if(x=='Y') si=i,sj=j;
		}
		a[i][0]=a[i][m+1]=1;
	}
	f[si][sj]=1;
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(!a[i][j]&&!a[i-1][j])
			{
				f[i][j]=max(f[i][j],f[i-1][j]);
				if(!a[i-1][j-1]) f[i][j]=max(f[i][j],f[i-1][j-1]);
				if(!a[i-1][j+1]) f[i][j]=max(f[i][j],f[i-1][j+1]);
			}
//			cout<<f[i][j]<<" ";
		}
//		cout<<"\n";
	}
	for(int j=1;j<=m;j++)
	{
		if(f[n][j]) 
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
}

