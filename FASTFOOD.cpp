#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1]={0};  //array a
        int b[n+1]={0};  //array b
        int ta=0;        //total for array a
        int tb=0;        //total for array b
        int best=0;      //maximum profit

        for(int i=1;i<=n;i++)  //scan elements of array a and calculate ta
        {
            cin>>a[i];
            ta+=a[i];
        }
        for(int i=1;i<=n;i++)  //scan elements of array b and calculate tb
        {
            cin>>b[i];
            tb+=b[i];
        }
        int now=0;      //index variable
        for(int i=0;i<=n;i++)
        {
            now+=a[i];
            tb-=b[i];
            best=max(best,now+tb);
        }
        cout<<best<<endl;
    }
	return 0;
}
