#include<bits/stdc++.h>
#define ll long long
using namespace std;
class Box
{
    public:
        Box(ll l1=0,ll b1=0,ll h1=0)
        {
            l=l1,b=b1,h=h1;
        }
        ll getLength(){return l;}
        ll getBreadth(){return b;}
        ll getHeight() {return h;}
        ll CalculateVolume()
        {
            return l*h*b;
        }
        bool operator < (const Box& other) const&
        {
            if(l<other.l) return 1;
            if(b<other.b) return 1;
            return h<other.h;
        }
        friend ostream& operator <<(ostream& out,const Box& B)
        {
            out<<B.l<<" "<<B.b<<" "<<B.h;
            return out;
        }
    private:    
        ll l,b,h;
};
void check2()
{
	ll n;
	cin>>n;
	Box temp;
	for(ll i=0;i<n;i++)
	{
		ll type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			ll l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			ll l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

signed main()
{
	check2();
}

