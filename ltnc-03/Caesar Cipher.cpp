#include<bits/stdc++.h>
#define ll long long
using namespace std;
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n,k;
	string s;
	cin>>n;
	cin>>s;
	cin>>k;
	for(int i=0;i<n;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			s[i]=char((s[i]-'a'+k)%26+'a');
		}
		if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]=char((s[i]-'A'+k)%26+'A');
		}
	}
	cout<<s;
}

