#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Student
{
	public:
		void input()
		{
			cin>>a>>b>>c>>d>>e;
			
		}
		int calculateTotalScore()
		{
			scores=a+b+c+d+e;
			return scores;
		}
	private:	
		int a,b,c,d,e,scores=0;
};
Student a[1000];
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		a[i].input();
	}
	int res=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i].calculateTotalScore()>a[1].calculateTotalScore()) res++;
	}
	cout<<res;
}

