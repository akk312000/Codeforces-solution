#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define pb push_back
typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1000000007;
const int MAX = 5000000 + 2;
const int Unknown = -1;
vector<int>cache(MAX, Unknown);
int steps(long long x)
{
	if (x == 1)return 1;
	if (x < cache.size() && cache[x] != Unknown)
		return cache[x];
	long long next;
	if (x % 2 == 0)next = x / 2;
	else next = 3 * x + 1;
	auto result = 1 + steps(next);
	if (x < cache.size())cache[x] = result;
	return result;

}

signed main()
{

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
	fast_io

	int t;
	cin >> t;
	map<unsigned int, unsigned int> longest;
	unsigned int maxTested = 1;
	longest[maxTested] = 1;

	while (t--)
	{
		int x; cin >> x;
		for (; maxTested <= x; maxTested++)
		{
			auto length = steps(maxTested);
			if (length >= longest.rbegin()->second)longest[maxTested] = length;

		}
		auto best = longest.upper_bound(x);
		best--;
		cout << best->first << endl;










	}

	return 0;
}