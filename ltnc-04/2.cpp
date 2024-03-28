#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[100010],cnt[100010];
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,res=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cnt[a[i]]++;
		res=max(res,cnt[a[i]]);
	}
	cout<<n-res;
}

