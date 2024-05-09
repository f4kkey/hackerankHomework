#include<bits/stdc++.h>
#define ll long long
using namespace std;
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin>>s;
	int cnt=1;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='A'&&s[i]<='Z') cnt++;
	}
	cout<<cnt;
}

