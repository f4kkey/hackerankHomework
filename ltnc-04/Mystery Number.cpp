#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[100000],b[110],cnt[110];
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++) 
	{
		cin>>a[i];
		cnt[a[i]]++;
	}
	int res=0;
	for(int i=1;i<=n+1;i++)
	{
		cin>>b[i];
		if(cnt[b[i]]==0)
		{
			res=b[i];
		}
		cnt[b[i]]--;
	}
	cout<<res;
}

