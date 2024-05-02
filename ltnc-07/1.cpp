#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[1000100];
int dp(int x,int l,int r)
{
//	cout<<l<<" "<<r<<"\n";
	if(l==r) return l;
	int mid=(l+r)/2;
	if(x<=a[mid]) return dp(x,l,mid);
	else return dp(x,mid+1,r);
}
main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int x;
	cin>>x;
	sort(a+1,a+1+n);
	cout<<dp(x,1,n);
}

