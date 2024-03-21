#include<bits/stdc++.h>
#define ll long long
using namespace std;
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	cin>>s;
	if(s[s.size()-2]=='A')
	{
		if(s[0]=='1'&&s[1]=='2') cout<<"00";
		else cout<<s[0]<<s[1];
		for(int i=2;i<s.size()-2;i++) cout<<s[i];
	}
	else
	{
		int x=s[0]-'0';
		x=x*10+(s[1]-'0');
		x=x%12+12;
		cout<<x;
		for(int i=2;i<s.size()-2;i++) cout<<s[i];
	}
}

