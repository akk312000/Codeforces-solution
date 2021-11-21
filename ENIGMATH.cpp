#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define pb push_back
typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1000000007;
signed main()
{

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
	fast_io

	long long int t;
	cin >> t;
	while (t--)
	{
		long long int a, b; cin >> a >> b;
		long long int gp = __gcd(a, b);
		long long int a1 = a / gp;
		long long int b1 = b / gp;
		cout << b1 << " " << a1 << endl;








	}

	return 0;
}