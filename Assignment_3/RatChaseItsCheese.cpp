#include <iostream>
#include <vector>
#include <string>
using namespace std;
void print(const vector<string> &num) {
    for (const string &row : num) {
        for (char ch : row) {
			if(ch=='X' or ch=='O'){
				cout<<'0'<<" ";
			}
			else{
				cout<<ch<<" ";
			}
        }
        cout << endl;
    }
    cout << endl;
}
void Waysignoring1(vector<int>& r, vector<string> &num, int n, int m, int i, int j)
{
    if (i >= n || j >= m || i < 0 || j < 0 || num[i][j] == 'X' ||num[i][j]=='1')
    {
        return;
    }
    if (i == n - 1 and j == m - 1)
    {
        num[i][j]='1';
        print(num);
        num[i][j]='0';
        return;
    }
    num[i][j]='1';
    Waysignoring1(r, num, n, m, i, j + 1);
    Waysignoring1(r, num, n, m, i + 1, j);
    Waysignoring1(r, num, n, m, i, j - 1);
    Waysignoring1(r, num, n, m, i - 1, j);
    num[i][j]='0';
}
int main()
{
    int n,m;
	cin>>n>>m;
    vector<string> num(n);
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }
    vector<int> r;
    Waysignoring1(r, num, n, m, 0, 0);
}