#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> key={"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void phoneKeypad(int& count,string& n,string& r,int i,int j){
	// base case
	if(i==n.size()){
		cout<<r<<" ";
		count++;
		return ;
	}

	// recursive case

	int digit=n[i]-'0';
	if(digit==0){
		phoneKeypad(count,n,r,i+1,j);
	}
	else{
		for(int k=0;k<key[digit].size();k++){
			r[j]=key[digit][k];
			phoneKeypad(count,n,r,i+1,j+1);
		}
	}
}
int main()
{
    string n;
    cin >> n;
    string r(n.size(),' ');
	int count=0;
    phoneKeypad(count,n, r, 0, 0);
	cout<<endl<<count<<endl;
}