#include<bits/stdc++.h>
#define ll long long
using namespace std;
char a[11][11],b[11][11];
string s[11];
int id[11];
struct lmao
{
	int i,j;
};
vector<lmao> v;
vector<vector<lmao> > g;
void right(int i,int j)
{
	if((j==1||a[i][j-1]=='+')&&a[i][j]=='-') 
	{
		for(int z=j;z<=10;z++) if(a[i][z]=='-') v.push_back({i,z});
		g.push_back(v);
		v.clear();
	}
}
void down(int i,int j)
{
	if((i==1||a[i-1][j]=='+')&&a[i][j]=='-') 
	{
		for(int z=i;z<=10;z++) if(a[z][j]=='-') v.push_back({z,j});
		g.push_back(v);
		v.clear();
	}
}
main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			right(i,j);
			down(i,j);
		}
	}
	for(auto x:g)
	{
		for(auto y:x)
		{
			cout<<y.i<<" "<<y.j<<"\n";
		}
		cout<<"\n";
	}
}

