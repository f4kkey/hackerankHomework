#include<bits/stdc++.h>
#define ll long long
using namespace std;
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,p;
	cin>>n>>p;
	int a=(p)/2+1;
	int b=(n)/2+1;
//	cout<<a<<" "<<b<<"\n";
	cout<<min(a-1,b-a);
}

