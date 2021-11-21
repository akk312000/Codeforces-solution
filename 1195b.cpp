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

	long long int n, k;
	cin >> n >> k;
	int low = 0; int mid;
	int high = n;
	while (low <= high) {
		mid = low + (high - low) / 2;
		if (((n - mid) * (n - mid + 1)) / 2 == (mid + k))
		{
			cout << mid << endl;
			break;
		}
		else if (((n - mid) * (n - mid + 1)) / 2 > (mid + k))
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return 0;
}