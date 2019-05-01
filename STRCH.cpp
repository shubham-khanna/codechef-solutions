#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;
//gives total number of substrings possible for string of length x
ll sum(ll x)         
{
    return x*(x+1)/2;
}
//function to calculate total number of substrings containing character c
//we subtract substrings not containing character c from total number of substrings 
ll solve(ll n,string s,char c) {
    ll t=0,missing=0;   //t holds index and missing calculates the total number of substrings not containing character c
    for(auto e:s)
    {
        if(e==c)
            missing+=sum(t),t=0;   //calculate substrings not containing c till index i
        else
            ++t;          //else increment index
    }
    missing+=sum(t);
    return sum(n)-missing;    //return substrings not containing character c
}

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        char c;
        cin>>s>>c;
        cout<<solve(n,s,c)<<endl;
    }
	return 0;
}
