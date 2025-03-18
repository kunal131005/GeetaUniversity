#include <iostream>
using namespace std;
void helpAlice(int n, int i, string r, int &count)
{
    if (i == n)
    {
        count++;
        cout << r << " ";
        return;
    }

    r.push_back('a');
    helpAlice(n, i + 1, r, count);
    r.pop_back();
    if (r.back() != 'b')
    {
        r.push_back('b');
        helpAlice(n, i + 1, r, count);
        r.pop_back();
    }
}
int main()
{
    int t;
	cin>>t;
	int i=1;
	while(t--){
		int n;
		cin>>n;
		int count=0;
		helpAlice(n,0,"",count);
		cout<<"#"<<i++<<" "<<": "<<count<<endl;
	}
}