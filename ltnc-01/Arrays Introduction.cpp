#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    vector<int> v;
    cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++) 
    {
        cin>>v[i];
    } 
    for(int i=0;i<n;i++) 
    {
        cout<<v[n-i-1]<<" ";
    } 
    return 0;

}

