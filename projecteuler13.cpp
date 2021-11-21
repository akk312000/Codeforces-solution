#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define pb push_back
typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1000000007;
string findSum(string str1, string str2)
{
	// Before proceeding further, make sure length
	// of str2 is larger.
	if (str1.length() > str2.length())
		swap(str1, str2);

	// Take an empty string for storing result
	string str = "";

	// Calculate length of both string
	int n1 = str1.length(), n2 = str2.length();

	// Reverse both of strings
	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());

	int carry = 0;
	for (int i = 0; i < n1; i++)
	{
		// Do school mathematics, compute sum of
		// current digits and carry
		int sum = ((str1[i] - '0') + (str2[i] - '0') + carry);
		str.push_back(sum % 10 + '0');

		// Calculate carry for next step
		carry = sum / 10;
	}

	// Add remaining digits of larger number
	for (int i = n1; i < n2; i++)
	{
		int sum = ((str2[i] - '0') + carry);
		str.push_back(sum % 10 + '0');
		carry = sum / 10;
	}

	// Add remaining carry
	if (carry)
		str.push_back(carry + '0');

	// reverse resultant string
	reverse(str.begin(), str.end());

	return str;
}
signed main()
{

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
	fast_io

	int n;
	cin >> n;
	vector<string>st(n);
	while (n--)
	{
		string test; cin >> test;
		st.push_back(test);
	}

	string ans = "";
	for (auto it : st)
	{

		ans = findSum(ans, it);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << ans[i];
	}
	cout << endl;


	return 0;
}