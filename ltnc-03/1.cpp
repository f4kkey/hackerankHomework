#include<bits/stdc++.h>
#define ll long long
using namespace std;
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string a,b;
	cin>>a>>b;
	cout<<a.size()<<" "<<b.size()<<"\n";
	cout<<a<<b<<"\n";
	swap(a[0],b[0]);
	cout<<a<<" "<<b;
}

