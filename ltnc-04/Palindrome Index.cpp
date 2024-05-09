#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
bool check(string s,int p)
{
	int l=1,r=n;
	while(l<r)
	{
		if(l==p) l++;
		else if(r==p) r--;
		else
		{
			if(s[l]!=s[r]) return 0;
			l++;
			r--;
		}
		
	}
	return 1;
}
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int test;
	cin>>test;
	while(test--)
	{
		string s;
		cin>>s;
		n=s.size();
		int l=1,r=n;
		s=" "+s;
		int p1=0,p2=0;
		while(l<r)
		{
			if(s[l]!=s[r]) 
			{
				p1=l;
				p2=r;
				break;
			}
			l++;
			r--;
		}
		if(p1==0) 
		{
			cout<<-1<<"\n";
			continue;
		}
		if(check(s,p1)) cout<<p1-1<<"\n";
		else if(check(s,p2)) cout<<p2-1<<"\n";
		else cout<<-1<<"\n";
	}
}

