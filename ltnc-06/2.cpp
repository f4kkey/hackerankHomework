#include<bits/stdc++.h>
#define ll long long
using namespace std;
class lmao
{
	public:
		void input()
		{
			cin>>a>>b>>c>>d;
		}
		void output()
		{
			cout<<a<<"\n"<<c<<", "<<b<<"\n"<<d<<"\n\n";
			cout<<a<<","<<b<<","<<c<<","<<d;
		}
	private:	
		int a,d;
		string b,c;
};
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	lmao x;
	x.input();
	x.output();
}

