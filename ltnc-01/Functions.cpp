#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int mx(int a, int b, int c, int d) 
{
    return max({a,b,c,d});
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<mx( a,  b,  c,  d);
    return 0;
}

