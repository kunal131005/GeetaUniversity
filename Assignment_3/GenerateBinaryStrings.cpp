#include<iostream>
#include<string>

using namespace std;

void whatShouldINameThisFunction(string str, int size, int pos) {
	if(pos>=size) {
		cout << str << " ";
		return;
	}
	if(str[pos] == '?') {
		str[pos] = '0';
		whatShouldINameThisFunction(str, size, pos+1);

		str[pos] = '1';
		whatShouldINameThisFunction(str, size, pos+1);

	} else whatShouldINameThisFunction(str, size, pos+1);
}

int main() {
	int cases; cin >> cases;
	while(cases--) {
		string str; cin >> str;
		int size = str.size();
		whatShouldINameThisFunction(str, size, 0);
		cout<<endl;
	}
	return 0;
}