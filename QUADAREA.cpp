#include <bits/stdc++.h>

using namespace std;

// Function to compute num (mod a)
int mod(string num, int a)
{
	// Initialize result
	int res = 0;

	// One by one process all digits of 'num'
	for (int i = 0; i < num.length(); i++)
		res = (res * 10 + (int)num[i] - '0') % a;

	return res;
}

// Driver program
int main()
{
#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
	string num = "12345678912345678912345678912345678917891";
	cout << mod(num, 7);
	return 0;
}
