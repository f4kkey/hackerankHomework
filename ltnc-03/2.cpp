#include<bits/stdc++.h>
#define ll long long
using namespace std;
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;
	int m=(x1-x2);
	int n=(v2-v1);
	if(m==n||(n!=0&&m%n==0&&m/n>0)) cout<<"YES";
	else cout<<"NO";
}

