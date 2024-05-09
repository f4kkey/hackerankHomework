#include<bits/stdc++.h>
#define ll long long
using namespace std;
signed main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int *a=new int;
	int *b=new int;
	cin>>(*a)>>(*b);
	cout<<(*a+*b)<<"\n"<<abs(*a-*b);
}

