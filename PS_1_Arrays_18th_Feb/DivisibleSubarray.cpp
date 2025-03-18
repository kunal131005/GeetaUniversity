#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}
	vector<int> c_sum(n + 1, 0);
	for (int i = 0; i < n; i++)
	{
		c_sum[i] += vec[i] + c_sum[i - 1];
	}
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = i; j < n; j++)
		{
			sum = c_sum[j] - c_sum[i - 1];
			if (sum % n == 0)
			{
				count++;
			}
			else
			{
				sum = 0;
			}
		}
	}
	cout << count << endl;
}