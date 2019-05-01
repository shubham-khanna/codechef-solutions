#include <bits/stdc++.h>

#define fi first
#define se second

const int N = 200200;
const long long mod = 998244353;

using namespace std;

int n;
int q;
int a[N];

void solve()
{
	    scanf("%d%d", &n, &q);
	    vector < int > v;
	    for(int i = 1; i <= n; i++){
	            scanf("%d", &a[i]);
	            v.push_back(a[i]);
	    }

	    sort(v.begin(), v.end());

	    for(int i = 1; i <= q; i++){
	            int s, t;
	            scanf("%d%d", &s, &t);

	            int cost = abs(a[s] - a[t]) + t - s;   //formula given in question
              //length = upper_bound()-lower_bound()
	            int length = upper_bound(v.begin(), v.end(), max(a[s], a[t])) - v.begin();
	            length -= lower_bound(v.begin(), v.end(), min(a[s], a[t])) - v.begin();

	            printf("%d %d\n", cost, length);
	    }
}

int main()
{
	    ios_base::sync_with_stdio(0);

	    int T;
	    scanf("%d", &T);
	    while(T--){
	            solve();
	    }
	    
}
