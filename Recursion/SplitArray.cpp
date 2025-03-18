#include <bits/stdc++.h>
using namespace std;

void getAll(vector<int> &arr, int size, vector<int> &grp1, vector<int> &grp2, int pos, int &count) {
	if(pos>=size) {
		int sum1 = 0, sum2 = 0;
		for(int &val: grp1) sum1+=val;
		for(int &val: grp2) sum2+=val;
		if(sum1==sum2) {
			count+=1;
			for(int &val: grp1) cout << val << " ";
			cout << "and ";
			for(int &val: grp2) cout << val << " ";
			cout << endl;
		}
		return;
	}
	
	grp1.push_back(arr[pos]);
	getAll(arr, size, grp1, grp2, pos+1, count);
	grp1.pop_back();
	grp2.push_back(arr[pos]);
	getAll(arr, size, grp1, grp2, pos+1, count);
	grp2.pop_back();
}

int main()
{
	int size; cin >> size;
	vector<int> arr(size); for(int &val: arr) cin >> val;

	int count = 0;
	vector<int> grp1;
	vector<int> grp2;

	getAll(arr, size, grp1, grp2, 0, count);

	cout << count << endl;
	return 0;
}