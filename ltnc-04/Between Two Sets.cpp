#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[1000],b[1000];
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int j=1;j<=m;j++) cin>>b[j];
	int res=0;
	for(int x=1;x<=100;x++)
	{
		bool check=1;
		for(int i=1;i<=n;i++)
		{
			if(x%a[i]!=0) 
			{
				check=0;
				break;
			}
		}
		for(int i=1;i<=m;i++)
		{
			if(!check||b[i]%x!=0) 
			{
				check=0;
				break;
			}
		}
		res+=check;
	}
	cout<<res;
}

