#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define ull  long
#define pb push_back
typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1000000007;
ull getsize(ull no)
{
	ull count = 0;
	while (no > 0)
	{
		count++;
		no /= 10;
	}
	return count;
}
ull karatsuba(ull x, ull y)
{
	if (x < 10 && y < 10)return x * y;
	ull size = max(getsize(x), getsize(y));
	ull n = ceil(size / 2.0);
	ull p = floor(x / (double)p);
	ull a = x % p;
	ull b = x % p;
	ull c = floor(y / (double)p);
	ull d = y % p;
	ull ac = karatsuba(a, c);
	ull bd = karatsuba(b, d);
	ull e = karatsuba(a + b, c + d) - ac - bd;
	return (ull)(pow(10 * 1ULL, 2 * n) * ac + pow(10 * 1ULL, n) * e + bd);
}
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
		ull l1, l2; cin >> l1, l2;
		cout << karatsuba(l1, l2) << endl;









	}

	return 0;
}